#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectReleaseContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkObjectReleaseContext)
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
// Forward declare root types
namespace Fusion {
struct NetworkObjectReleaseContext;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectReleaseContext);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectReleaseContext, "Fusion", "NetworkObjectReleaseContext");
// [IsReadOnly]
// Dependencies Fusion.NetworkObjectTypeId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectReleaseContext
struct CORDL_TYPE NetworkObjectReleaseContext {
public:
// Declarations
/// @brief Method ToString, addr 0x5fcc6c8, size 0x1d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5fcc688, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkObject*  obj, ::Fusion::NetworkObjectTypeId  typeId, bool  isBeingDestroyed, bool  isNested) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectReleaseContext() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::UnityW<::Fusion::NetworkObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TypeId", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsBeingDestroyed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsNestedObject", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectReleaseContext(::UnityW<::Fusion::NetworkObject>  Object, ::Fusion::NetworkObjectTypeId  TypeId, bool  IsBeingDestroyed, bool  IsNestedObject) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19161};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Object, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  Object;

/// @brief Field TypeId, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectTypeId  TypeId;

/// @brief Field IsBeingDestroyed, offset: 0x10, size: 0x1, def value: None
 bool  IsBeingDestroyed;

/// @brief Field IsNestedObject, offset: 0x11, size: 0x1, def value: None
 bool  IsNestedObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectReleaseContext, Object) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectReleaseContext, TypeId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectReleaseContext, IsBeingDestroyed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkObjectReleaseContext, IsNestedObject) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectReleaseContext) == 0x18, "Size mismatch!");

} // namespace end def Fusion
