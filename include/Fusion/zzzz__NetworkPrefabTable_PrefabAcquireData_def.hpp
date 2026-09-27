#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabTable_PrefabAcquireData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabTable_PrefabAcquireData)
// Forward declare root types
namespace GlobalNamespace {
struct NetworkPrefabTable_PrefabAcquireData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData, "Fusion", "NetworkPrefabTable/PrefabAcquireData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkPrefabTable/PrefabAcquireData
struct CORDL_TYPE NetworkPrefabTable_PrefabAcquireData {
public:
// Declarations
 __declspec(property(get=get_InstanceCount, put=set_InstanceCount)) int32_t  InstanceCount;

 __declspec(property(get=get_IsSynchronous, put=set_IsSynchronous)) bool  IsSynchronous;

/// @brief Method get_InstanceCount, addr 0x5fcf128, size 0xc, virtual false, abstract: false, final false
inline int32_t get_InstanceCount() ;

/// @brief Method get_IsSynchronous, addr 0x5fcfeb4, size 0xc, virtual false, abstract: false, final false
inline bool get_IsSynchronous() ;

/// @brief Method set_InstanceCount, addr 0x5fcf2e8, size 0x10, virtual false, abstract: false, final false
inline void set_InstanceCount(int32_t  value) ;

/// @brief Method set_IsSynchronous, addr 0x5fcfe98, size 0x1c, virtual false, abstract: false, final false
inline void set_IsSynchronous(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabTable_PrefabAcquireData() ;

// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabTable_PrefabAcquireData(uint32_t  RawValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field RawValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  RawValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData, RawValue) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkPrefabTable_PrefabAcquireData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
