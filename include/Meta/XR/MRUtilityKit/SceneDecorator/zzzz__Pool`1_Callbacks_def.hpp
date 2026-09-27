#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool`1_Callbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Pool`1_Callbacks)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Pool_1_Callbacks;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Pool_1_Callbacks);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Pool_1_Callbacks, "Meta.XR.MRUtilityKit.SceneDecorator", "Pool`1/Callbacks");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Pool`1/Callbacks<T>
struct CORDL_TYPE Pool_1_Callbacks {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Pool_1_Callbacks() ;

// Ctor Parameters [CppParam { name: "Create", ty: "::System::Func_2<T,T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnGet", ty: "::System::Action_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnRelease", ty: "::System::Action_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr Pool_1_Callbacks(::System::Func_2<T,T>*  Create, ::System::Action_1<T>*  OnGet, ::System::Action_1<T>*  OnRelease) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Create, offset: 0x0, size: 0x8, def value: None
 ::System::Func_2<T,T>*  Create;

/// @brief Field OnGet, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<T>*  OnGet;

/// @brief Field OnRelease, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  OnRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
