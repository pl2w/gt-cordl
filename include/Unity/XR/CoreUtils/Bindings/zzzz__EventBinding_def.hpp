#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/EventBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EventBinding)
namespace System {
class Action;
}
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings {
struct EventBinding;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::Bindings::EventBinding);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Bindings::EventBinding, "Unity.XR.CoreUtils.Bindings", "EventBinding");
// Dependencies 
namespace Unity::XR::CoreUtils::Bindings {
// Is value type: true
// CS Name: Unity.XR.CoreUtils.Bindings.EventBinding
struct CORDL_TYPE EventBinding {
public:
// Declarations
 __declspec(property(get=get_BindAction, put=set_BindAction)) ::System::Action*  BindAction;

 __declspec(property(get=get_IsBound)) bool  IsBound;

 __declspec(property(get=get_UnbindAction, put=set_UnbindAction)) ::System::Action*  UnbindAction;

/// @brief Convert operator to "::Unity::XR::CoreUtils::Bindings::IEventBinding"
constexpr operator  ::Unity::XR::CoreUtils::Bindings::IEventBinding*() ;

/// @brief Method Bind, addr 0xb3fdd6c, size 0x38, virtual true, abstract: false, final true
inline void Bind() ;

/// @brief Method ClearBinding, addr 0xb3fddd8, size 0x50, virtual true, abstract: false, final true
inline void ClearBinding() ;

/// @brief Method Unbind, addr 0xb3fdda4, size 0x34, virtual true, abstract: false, final true
inline void Unbind() ;

/// @brief Method .ctor, addr 0xb3fdd34, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Action*  bindAction, ::System::Action*  unBindAction) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_BindAction, addr 0xb3fdd0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_BindAction() ;

/// @brief Method get_IsBound, addr 0xb3fdd2c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsBound() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_UnbindAction, addr 0xb3fdd1c, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_UnbindAction() ;

/// @brief Convert to "::Unity::XR::CoreUtils::Bindings::IEventBinding"
constexpr ::Unity::XR::CoreUtils::Bindings::IEventBinding* i___Unity__XR__CoreUtils__Bindings__IEventBinding() ;

/// [CompilerGenerated]
/// @brief Method set_BindAction, addr 0xb3fdd14, size 0x8, virtual false, abstract: false, final false
inline void set_BindAction(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UnbindAction, addr 0xb3fdd24, size 0x8, virtual false, abstract: false, final false
inline void set_UnbindAction(::System::Action*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr EventBinding() ;

// Ctor Parameters [CppParam { name: "_BindAction_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UnbindAction_k__BackingField", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IsBound", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EventBinding(::System::Action*  _BindAction_k__BackingField, ::System::Action*  _UnbindAction_k__BackingField, bool  m_IsBound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <BindAction>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Action*  _BindAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UnbindAction>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Action*  _UnbindAction_k__BackingField;

/// @brief Field m_IsBound, offset: 0x10, size: 0x1, def value: None
 bool  m_IsBound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::Bindings::EventBinding, _BindAction_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::Bindings::EventBinding, _UnbindAction_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::Bindings::EventBinding, m_IsBound) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::Bindings::EventBinding) == 0x18, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Bindings
