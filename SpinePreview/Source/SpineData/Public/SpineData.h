#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "Modules/ModuleManager.h"
#include "SpineData/CustomSpineData/SpineMesh.h"
#include "SpineData.generated.h"

class FSpineMeshAction : public FAssetTypeActions_Base
{
public:
    virtual FText GetName() const override
    {
        return NSLOCTEXT("AssetTypeActions", "FSpineMeshAction", "SpineMesh");
    }
    virtual FColor GetTypeColor() const override
    {
        return FColor(0, 255, 0); 
    }
    virtual UClass* GetSupportedClass() const override
    {
        return USpineMesh::StaticClass();
    }
    virtual uint32 GetCategories() override
    {
        return EAssetTypeCategories::Blueprint;
    }
    virtual TSharedPtr<SWidget> GetThumbnailOverlay(const FAssetData& AssetData) const override
    {
        USpineMesh* SpineMesh = Cast<USpineMesh>(AssetData.GetAsset());
        if (SpineMesh->SpineAtlasAsset)
        {
            FSlateBrush* ItemBrush = new FSlateBrush();;
            ItemBrush->SetResourceObject(SpineMesh->SpineAtlasAsset->atlasPages[0]);
            ItemBrush->ImageSize.X = SpineMesh->SpineAtlasAsset->atlasPages[0]->GetSurfaceWidth();
            ItemBrush->ImageSize.Y = SpineMesh->SpineAtlasAsset->atlasPages[0]->GetSurfaceHeight();
            ItemBrush->DrawAs = ESlateBrushDrawType::Image;
            return SNew(SImage)
            .Image(ItemBrush);
        }
        else
        {
            return FAssetTypeActions_Base::GetThumbnailOverlay(AssetData);
        }
    }
};

class FSpineDataModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};

UCLASS()
class USpineMeshFactory : public UFactory
{
public:
    GENERATED_BODY()
    USpineMeshFactory(const class FObjectInitializer& ObjectInitializer);
    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
    virtual bool CanCreateNew() const override;
};
