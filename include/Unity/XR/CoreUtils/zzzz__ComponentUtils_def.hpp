#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ComponentUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(ComponentUtils)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ComponentUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ComponentUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ComponentUtils*, "Unity.XR.CoreUtils", "ComponentUtils");
// Dependencies System.Object, UnityEngine.Component
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ComponentUtils
class CORDL_TYPE ComponentUtils : public ::System::Object {
public:
// Declarations
/// @brief Method GetOrAddIf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetOrAddIf(::UnityEngine::GameObject*  gameObject, bool  add) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentUtils(ComponentUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentUtils(ComponentUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::ComponentUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
