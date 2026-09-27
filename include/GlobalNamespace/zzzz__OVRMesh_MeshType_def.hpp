#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMesh_MeshType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMesh_MeshType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMesh_MeshType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMesh_MeshType, "", "OVRMesh/MeshType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMesh/MeshType
struct CORDL_TYPE OVRMesh_MeshType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRMesh_MeshType_Unwrapped
enum struct __OVRMesh_MeshType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_HandLeft = static_cast<int32_t>(0x0),
__E_HandRight = static_cast<int32_t>(0x1),
__E_XRHandLeft = static_cast<int32_t>(0x4),
__E_XRHandRight = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRMesh_MeshType_Unwrapped () const noexcept {
return static_cast<__OVRMesh_MeshType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRMesh_MeshType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMesh_MeshType(int32_t  value__) noexcept;

/// @brief Field HandLeft value: I32(0)
static ::GlobalNamespace::OVRMesh_MeshType const HandLeft;

/// @brief Field HandRight value: I32(1)
static ::GlobalNamespace::OVRMesh_MeshType const HandRight;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRMesh_MeshType const None;

/// @brief Field XRHandLeft value: I32(4)
static ::GlobalNamespace::OVRMesh_MeshType const XRHandLeft;

/// @brief Field XRHandRight value: I32(5)
static ::GlobalNamespace::OVRMesh_MeshType const XRHandRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMesh_MeshType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMesh_MeshType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
