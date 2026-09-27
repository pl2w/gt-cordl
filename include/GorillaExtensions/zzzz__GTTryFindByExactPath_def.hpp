#pragma once
// IWYU pragma private; include "GorillaExtensions/GTTryFindByExactPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTTryFindByExactPath)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaExtensions {
class GTTryFindByExactPath;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::GTTryFindByExactPath*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::GTTryFindByExactPath*, "GorillaExtensions", "GTTryFindByExactPath");
// Dependencies System.Object, UnityEngine.Component
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.GTTryFindByExactPath
class CORDL_TYPE GTTryFindByExactPath : public ::System::Object {
public:
// Declarations
/// @brief Method WithSiblingIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool WithSiblingIndex(::StringW  xformPath, ::by_ref<T>  component) ;

/// @brief Method WithSiblingIndexAndTypeName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool WithSiblingIndexAndTypeName(::StringW  path, ::by_ref<T>  out_component) ;

/// @brief Method XformWithSiblingIndex, addr 0x5d18024, size 0x328, virtual false, abstract: false, final false
static inline bool XformWithSiblingIndex(::StringW  xformPath, ::by_ref<::UnityEngine::Transform*>  finalXform) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTTryFindByExactPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTTryFindByExactPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTTryFindByExactPath(GTTryFindByExactPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTTryFindByExactPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTTryFindByExactPath(GTTryFindByExactPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::GTTryFindByExactPath) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
