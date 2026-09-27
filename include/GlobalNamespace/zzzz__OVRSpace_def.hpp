#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpace)
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpace, "", "OVRSpace");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpace
struct CORDL_TYPE OVRSpace {
public:
// Declarations
using StorageLocation = ::GlobalNamespace::OVRSpace_StorageLocation;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRSpace>*() ;

/// @brief Method Equals, addr 0xa63defc, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa63deec, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRSpace  other) ;

/// @brief Method GetHashCode, addr 0xa63df74, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xa63de74, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetUuid, addr 0xa63de00, size 0x6c, virtual false, abstract: false, final false
inline bool TryGetUuid(::by_ref<::System::Guid>  uuid) ;

/// @brief Method .ctor, addr 0xa63de6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint64_t  handle) ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa63ddf8, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_Valid, addr 0xa62c82c, size 0x10, virtual false, abstract: false, final false
inline bool get_Valid() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSpace>* i___System__IEquatable_1___GlobalNamespace__OVRSpace_() ;

/// @brief Method op_Equality, addr 0xa63df90, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRSpace  lhs, ::GlobalNamespace::OVRSpace  rhs) ;

/// @brief Method op_Implicit, addr 0xa62c828, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRSpace op_Implicit___GlobalNamespace__OVRSpace(uint64_t  handle) ;

/// @brief Method op_Implicit, addr 0xa62c478, size 0x4, virtual false, abstract: false, final false
static inline uint64_t op_Implicit_uint64_t(::GlobalNamespace::OVRSpace  space) ;

/// @brief Method op_Inequality, addr 0xa63df9c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRSpace  lhs, ::GlobalNamespace::OVRSpace  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpace() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpace(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpace, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpace) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
