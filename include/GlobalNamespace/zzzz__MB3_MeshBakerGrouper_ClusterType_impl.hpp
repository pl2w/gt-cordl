#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerGrouper_ClusterType.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerGrouper_ClusterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::MB3_MeshBakerGrouper_ClusterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::MB3_MeshBakerGrouper_ClusterType()   {
}
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::none{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::grid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::pie{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MB3_MeshBakerGrouper_ClusterType  GlobalNamespace::MB3_MeshBakerGrouper_ClusterType::agglomerative{static_cast<int32_t>(0x3)};
