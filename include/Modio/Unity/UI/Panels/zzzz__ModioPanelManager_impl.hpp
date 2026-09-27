#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPanelManager.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelManager_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.get_CurrentFocusedPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> (::Modio::Unity::UI::Panels::ModioPanelManager::*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::get_CurrentFocusedPanel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9fab688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"get_CurrentFocusedPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager> (*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::GetInstance)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9faab6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fab700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)(::Modio::Unity::UI::Panels::ModioPanelBase*)>(&::Modio::Unity::UI::Panels::ModioPanelManager::OpenPanel)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9faada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.ClosePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)(::Modio::Unity::UI::Panels::ModioPanelBase*)>(&::Modio::Unity::UI::Panels::ModioPanelManager::ClosePanel)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9faaeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"ClosePanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.PushFocusSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::PushFocusSuppression)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fab758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"PushFocusSuppression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.PopFocusSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModioPanelManager::PopFocusSuppression)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fab7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"PopFocusSuppression", {}, {::i2c::type_of<::GlobalNamespace::ModioPanelBase_GainedFocusCause>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::LateUpdate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9fab878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager.RegisterPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)(::Modio::Unity::UI::Panels::ModioPanelBase*)>(&::Modio::Unity::UI::Panels::ModioPanelManager::RegisterPanel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9faace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"RegisterPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPanelManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPanelManager::*)()>(&::Modio::Unity::UI::Panels::ModioPanelManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fab920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*& Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_get__allPotentialPanels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPotentialPanels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>* const& Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_get__allPotentialPanels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allPotentialPanels;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_set__allPotentialPanels(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allPotentialPanels = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*& Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_get__openWindows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openWindows;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>* const& Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_get__openWindows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openWindows;
}
constexpr void Modio::Unity::UI::Panels::ModioPanelManager::__cordl_internal_set__openWindows(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openWindows = value;
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::setStaticF__instance(::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>, "_instance", ::Modio::Unity::UI::Panels::ModioPanelManager*>(std::forward<::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>>(value));
}
inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager> Modio::Unity::UI::Panels::ModioPanelManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>, "_instance", ::Modio::Unity::UI::Panels::ModioPanelManager*>();
}
inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> Modio::Unity::UI::Panels::ModioPanelManager::get_CurrentFocusedPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"get_CurrentFocusedPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>>(this, ___internal_method);
}
inline ::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager> Modio::Unity::UI::Panels::ModioPanelManager::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Modio::Unity::UI::Panels::ModioPanelManager>>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::OpenPanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modioPanelBase);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::ClosePanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"ClosePanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modioPanelBase);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::PushFocusSuppression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"PushFocusSuppression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::PopFocusSuppression(::GlobalNamespace::ModioPanelBase_GainedFocusCause  gainedFocusCause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"PopFocusSuppression", {}, {::i2c::type_of<::GlobalNamespace::ModioPanelBase_GainedFocusCause>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gainedFocusCause);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::RegisterPanel(::Modio::Unity::UI::Panels::ModioPanelBase*  modioPanelBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {"RegisterPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Panels::ModioPanelBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modioPanelBase);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Modio::Unity::UI::Panels::ModioPanelBase*>)
inline T Modio::Unity::UI::Panels::ModioPanelManager::GetPanelOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                    {"GetPanelOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPanelManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPanelManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioPanelManager* Modio::Unity::UI::Panels::ModioPanelManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioPanelManager*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioPanelManager::ModioPanelManager()   {
}
