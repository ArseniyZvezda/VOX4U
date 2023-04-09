// Copyright 2016-2018 mik14a / Admix Network. All Rights Reserved.

#include "VoxAssetImportData.h"

UVoxAssetImportData::UVoxAssetImportData()
	: VoxImportType(EVoxImportType::StaticMesh)
	, bImportXForward(true)
	, bImportXYCenter(true)
	, VoxelSize(10.f)
{
}

void UVoxAssetImportData::ToVoxImportOption(UVoxImportOption& OutVoxImportOption)
{
	OutVoxImportOption.VoxImportType = VoxImportType;
	OutVoxImportOption.bImportXForward = bImportXForward;
	OutVoxImportOption.bImportXYCenter = bImportXYCenter;
	OutVoxImportOption.VoxelSize = VoxelSize;
	OutVoxImportOption.BuildSettings.BuildScale3D = FVector(VoxelSize);
}

void UVoxAssetImportData::FromVoxImportOption(const UVoxImportOption& VoxImportOption)
{
	VoxImportType = VoxImportOption.VoxImportType;
	bImportXForward = VoxImportOption.bImportXForward;
	bImportXYCenter = VoxImportOption.bImportXYCenter;
	VoxelSize = VoxImportOption.VoxelSize;
}
