#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSanitizer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventProvider)
namespace GlobalNamespace {
struct EventProvider_Registration;
}
namespace GlobalNamespace {
struct Event_Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputForUI {
class EventConsumer;
}
namespace UnityEngine::InputForUI {
class EventProvider___c;
}
namespace UnityEngine::InputForUI {
class EventProvider___c__DisplayClass8_0;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
// Forward declare root types
namespace UnityEngine::InputForUI {
class EventProvider;
}
namespace UnityEngine::InputForUI {
class EventProvider___c;
}
namespace UnityEngine::InputForUI {
class EventProvider___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputForUI::EventProvider*);
MARK_REF_T(::UnityEngine::InputForUI::EventProvider___c*);
MARK_REF_T(::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::EventProvider*, "UnityEngine.InputForUI", "EventProvider");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::EventProvider___c*, "UnityEngine.InputForUI", "EventProvider/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0*, "UnityEngine.InputForUI", "EventProvider/<>c__DisplayClass8_0");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object, UnityEngine.InputForUI.EventSanitizer
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider
class CORDL_TYPE EventProvider : public ::System::Object {
public:
// Declarations
using Registration = ::GlobalNamespace::EventProvider_Registration;

using __c = ::UnityEngine::InputForUI::EventProvider___c;

using __c__DisplayClass8_0 = ::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0;

/// @brief Field _registrations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registrations, put=setStaticF__registrations)) ::System::Collections::Generic::List_1<::GlobalNamespace::EventProvider_Registration>*  _registrations;

/// @brief Field m_IsEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_IsEnabled, put=setStaticF_m_IsEnabled)) bool  m_IsEnabled;

/// @brief Field m_IsInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_IsInitialized, put=setStaticF_m_IsInitialized)) bool  m_IsInitialized;

/// @brief Field s_focusChangedRegistered, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_focusChangedRegistered, put=setStaticF_s_focusChangedRegistered)) bool  s_focusChangedRegistered;

/// @brief Field s_impl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_impl, put=setStaticF_s_impl)) ::UnityEngine::InputForUI::IEventProviderImpl*  s_impl;

/// @brief Field s_implMockBackup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_implMockBackup, put=setStaticF_s_implMockBackup)) ::UnityEngine::InputForUI::IEventProviderImpl*  s_implMockBackup;

/// @brief Field s_sanitizer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sanitizer, put=setStaticF_s_sanitizer)) ::UnityEngine::InputForUI::EventSanitizer  s_sanitizer;

/// @brief Method Bootstrap, addr 0xb65ffc8, size 0x74, virtual false, abstract: false, final false
static inline void Bootstrap() ;

/// @brief Method Dispatch, addr 0xb660544, size 0x258, virtual false, abstract: false, final false
static inline void Dispatch(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputForUI::Event>  ev) ;

/// @brief Method Initialize, addr 0xb6601e0, size 0x1c4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// [RequiredByNativeCode]
/// @brief Method NotifyUpdate, addr 0xb660a8c, size 0x184, virtual false, abstract: false, final false
static inline void NotifyUpdate() ;

/// @brief Method OnFocusChanged, addr 0xb6609b0, size 0xdc, virtual false, abstract: false, final false
static inline void OnFocusChanged(bool  focus) ;

/// @brief Method SetEnabled, addr 0xb660150, size 0x90, virtual false, abstract: false, final false
static inline void SetEnabled(bool  enable) ;

/// @brief Method SetInputSystemProvider, addr 0xb660e00, size 0x9c, virtual false, abstract: false, final false
static inline void SetInputSystemProvider(::UnityEngine::InputForUI::IEventProviderImpl*  impl) ;

/// @brief Method Shutdown, addr 0xb6603a4, size 0x1a0, virtual false, abstract: false, final false
static inline void Shutdown() ;

/// @brief Method Subscribe, addr 0xb65fd58, size 0x270, virtual false, abstract: false, final false
static inline void Subscribe(::UnityEngine::InputForUI::EventConsumer*  handler, int32_t  priority, ::System::Nullable_1<int32_t>  playerId, /* [ParamArray] */ ::ArrayW<::GlobalNamespace::Event_Type>  type) ;

/// @brief Method Unsubscribe, addr 0xb66003c, size 0x10c, virtual false, abstract: false, final false
static inline void Unsubscribe(::UnityEngine::InputForUI::EventConsumer*  handler) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::EventProvider_Registration>* getStaticF__registrations() ;

static inline bool getStaticF_m_IsEnabled() ;

static inline bool getStaticF_m_IsInitialized() ;

static inline bool getStaticF_s_focusChangedRegistered() ;

static inline ::UnityEngine::InputForUI::IEventProviderImpl* getStaticF_s_impl() ;

static inline ::UnityEngine::InputForUI::IEventProviderImpl* getStaticF_s_implMockBackup() ;

static inline ::UnityEngine::InputForUI::EventSanitizer getStaticF_s_sanitizer() ;

static inline void setStaticF__registrations(::System::Collections::Generic::List_1<::GlobalNamespace::EventProvider_Registration>*  value) ;

static inline void setStaticF_m_IsEnabled(bool  value) ;

static inline void setStaticF_m_IsInitialized(bool  value) ;

static inline void setStaticF_s_focusChangedRegistered(bool  value) ;

static inline void setStaticF_s_impl(::UnityEngine::InputForUI::IEventProviderImpl*  value) ;

static inline void setStaticF_s_implMockBackup(::UnityEngine::InputForUI::IEventProviderImpl*  value) ;

static inline void setStaticF_s_sanitizer(::UnityEngine::InputForUI::EventSanitizer  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventProvider(EventProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventProvider(EventProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputForUI::EventProvider) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider/<>c__DisplayClass8_0
class CORDL_TYPE EventProvider___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::UnityEngine::InputForUI::EventConsumer*  handler;

static inline ::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <Unsubscribe>b__0, addr 0xb6611a0, size 0x14, virtual false, abstract: false, final false
inline bool _Unsubscribe_b__0(::GlobalNamespace::EventProvider_Registration  x) ;

constexpr ::UnityEngine::InputForUI::EventConsumer* const& __cordl_internal_get_handler() const;

constexpr ::UnityEngine::InputForUI::EventConsumer*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_handler(::UnityEngine::InputForUI::EventConsumer*  value) ;

/// @brief Method .ctor, addr 0xb660148, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventProvider___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventProvider___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventProvider___c__DisplayClass8_0(EventProvider___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventProvider___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventProvider___c__DisplayClass8_0(EventProvider___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31881};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputForUI::EventConsumer*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0, ___handler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputForUI::EventProvider___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputForUI.EventProvider/<>c
class CORDL_TYPE EventProvider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputForUI::EventProvider___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Comparison_1<::GlobalNamespace::EventProvider_Registration>*  __9__7_0;

static inline ::UnityEngine::InputForUI::EventProvider___c* New_ctor() ;

/// @brief Method <Subscribe>b__7_0, addr 0xb66118c, size 0x14, virtual false, abstract: false, final false
inline int32_t _Subscribe_b__7_0(::GlobalNamespace::EventProvider_Registration  a, ::GlobalNamespace::EventProvider_Registration  b) ;

/// @brief Method .ctor, addr 0xb661184, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputForUI::EventProvider___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::EventProvider_Registration>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::InputForUI::EventProvider___c*  value) ;

static inline void setStaticF___9__7_0(::System::Comparison_1<::GlobalNamespace::EventProvider_Registration>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventProvider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventProvider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventProvider___c(EventProvider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventProvider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventProvider___c(EventProvider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputForUI::EventProvider___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputForUI
