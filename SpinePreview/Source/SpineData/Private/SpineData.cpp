#include "SpineData.h"

#include "AssetToolsModule.h"
#include "SpineData/CustomSpineData/SpineMesh.h"

#define LOCTEXT_NAMESPACE "FSpineDataModule"

void FSpineDataModule::StartupModule()
{
	IAssetTools& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	TSharedPtr<FSpineMeshAction> SpineMeshAction = MakeShareable(new FSpineMeshAction);
	AssetToolsModule.RegisterAssetTypeActions(SpineMeshAction.ToSharedRef());
}

void FSpineDataModule::ShutdownModule()
{
    
}

USpineMeshFactory::USpineMeshFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = USpineMesh::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* USpineMeshFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                             UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(USpineMesh::StaticClass()))
	USpineMesh* SpineMesh = NewObject<USpineMesh>(InParent,Class,Name,Flags);
	return SpineMesh;
}

bool USpineMeshFactory::CanCreateNew() const
{
	return true;
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FSpineDataModule, SpineData)