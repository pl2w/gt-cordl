#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonitor.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckMonitor_def.hpp"
#include "Liv/Lck/zzzz__ILckMonitor_def.hpp"
#include "Liv/Lck/zzzz__LckMonitor_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckMonitor.add_OnRenderTextureSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*)>(&::Liv::Lck::LckMonitor::add_OnRenderTextureSet)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ce4764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"add_OnRenderTextureSet", {}, {::i2c::type_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor.remove_OnRenderTextureSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*)>(&::Liv::Lck::LckMonitor::remove_OnRenderTextureSet)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ce4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"remove_OnRenderTextureSet", {}, {::i2c::type_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor.get_MonitorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LckMonitor::*)()>(&::Liv::Lck::LckMonitor::get_MonitorId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce489c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"get_MonitorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)()>(&::Liv::Lck::LckMonitor::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ce48a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor.SetRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckMonitor::SetRenderTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ce4944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)()>(&::Liv::Lck::LckMonitor::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9ce4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor::*)()>(&::Liv::Lck::LckMonitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce49b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*& Liv::Lck::LckMonitor::__cordl_internal_get_OnRenderTextureSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRenderTextureSet;
}
constexpr ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate* const& Liv::Lck::LckMonitor::__cordl_internal_get_OnRenderTextureSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRenderTextureSet;
}
constexpr void Liv::Lck::LckMonitor::__cordl_internal_set_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRenderTextureSet = value;
}
constexpr ::StringW& Liv::Lck::LckMonitor::__cordl_internal_get__monitorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorId;
}
constexpr ::StringW const& Liv::Lck::LckMonitor::__cordl_internal_get__monitorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorId;
}
constexpr void Liv::Lck::LckMonitor::__cordl_internal_set__monitorId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitorId = value;
}
inline void Liv::Lck::LckMonitor::add_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"add_OnRenderTextureSet", {}, {::i2c::type_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckMonitor::remove_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"remove_OnRenderTextureSet", {}, {::i2c::type_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Liv::Lck::LckMonitor::get_MonitorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {"get_MonitorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::LckMonitor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonitor::SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::LckMonitor::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckMonitor* Liv::Lck::LckMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckMonitor*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckMonitor"
constexpr  Liv::Lck::LckMonitor::operator ::Liv::Lck::ILckMonitor*() noexcept {
return static_cast<::Liv::Lck::ILckMonitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckMonitor"
constexpr ::Liv::Lck::ILckMonitor* Liv::Lck::LckMonitor::i___Liv__Lck__ILckMonitor() noexcept {
return static_cast<::Liv::Lck::ILckMonitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMonitor::LckMonitor()   {
}
//  Writing Method size for method: ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9ce49bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ce4ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::*)(::UnityEngine::RenderTexture*, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ce4ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ce4af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::Invoke(::UnityEngine::RenderTexture*  renderTexture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline ::System::IAsyncResult* Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::BeginInvoke(::UnityEngine::RenderTexture*  renderTexture, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, renderTexture, callback, object);
}
inline void Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate* Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate::LckMonitor_LckMonitorRenderTextureSetDelegate()   {
}
