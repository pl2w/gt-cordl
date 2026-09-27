#pragma once
// IWYU pragma private; include "GlobalNamespace/DeepLinkHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeepLinkHandler_def.hpp"
#include "GlobalNamespace/zzzz__DeepLinkHandler_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)()>(&::GlobalNamespace::DeepLinkHandler::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5799318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::DeepLinkHandler::Initialize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5799430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.RefreshLaunchDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)()>(&::GlobalNamespace::DeepLinkHandler::RefreshLaunchDetails)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5799600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"RefreshLaunchDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.ProcessWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::StringW, ::StringW, ::StringW, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(&::GlobalNamespace::DeepLinkHandler::ProcessWebRequest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5799ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"ProcessWebRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.HandleDeepLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)()>(&::GlobalNamespace::DeepLinkHandler::HandleDeepLink)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x579988c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"HandleDeepLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.OnWitchbloodCollabResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::GlobalNamespace::DeepLinkHandler::OnWitchbloodCollabResponse)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5799fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"OnWitchbloodCollabResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.OnRaccoonLagoonCollabResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::GlobalNamespace::DeepLinkHandler::OnRaccoonLagoonCollabResponse)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x579a2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"OnRaccoonLagoonCollabResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler.CheckProcessExternalUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::DeepLinkHandler::*)(::ArrayW<::StringW>, bool, bool, bool)>(&::GlobalNamespace::DeepLinkHandler::CheckProcessExternalUnlock)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x579a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"CheckProcessExternalUnlock", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler::*)()>(&::GlobalNamespace::DeepLinkHandler::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x579a4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::LaunchDetails*& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_cachedLaunchDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLaunchDetails;
}
constexpr ::Oculus::Platform::Models::LaunchDetails* const& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_cachedLaunchDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedLaunchDetails;
}
constexpr void GlobalNamespace::DeepLinkHandler::__cordl_internal_set_cachedLaunchDetails(::Oculus::Platform::Models::LaunchDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedLaunchDetails = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_WitchbloodCollabCosmeticID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WitchbloodCollabCosmeticID;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_WitchbloodCollabCosmeticID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WitchbloodCollabCosmeticID;
}
constexpr void GlobalNamespace::DeepLinkHandler::__cordl_internal_set_WitchbloodCollabCosmeticID(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WitchbloodCollabCosmeticID = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_RaccoonLagoonCosmeticIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaccoonLagoonCosmeticIDs;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::DeepLinkHandler::__cordl_internal_get_RaccoonLagoonCosmeticIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RaccoonLagoonCosmeticIDs;
}
constexpr void GlobalNamespace::DeepLinkHandler::__cordl_internal_set_RaccoonLagoonCosmeticIDs(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RaccoonLagoonCosmeticIDs = value;
}
inline void GlobalNamespace::DeepLinkHandler::setStaticF_instance(::UnityW<::GlobalNamespace::DeepLinkHandler>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::DeepLinkHandler>, "instance", ::GlobalNamespace::DeepLinkHandler*>(std::forward<::UnityW<::GlobalNamespace::DeepLinkHandler>>(value));
}
inline ::UnityW<::GlobalNamespace::DeepLinkHandler> GlobalNamespace::DeepLinkHandler::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::DeepLinkHandler>, "instance", ::GlobalNamespace::DeepLinkHandler*>();
}
inline void GlobalNamespace::DeepLinkHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeepLinkHandler::Initialize(::UnityEngine::GameObject*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parent);
}
inline void GlobalNamespace::DeepLinkHandler::RefreshLaunchDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"RefreshLaunchDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::DeepLinkHandler::ProcessWebRequest(::StringW  url, ::StringW  data, ::StringW  contentType, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"ProcessWebRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, url, data, contentType, callback);
}
inline void GlobalNamespace::DeepLinkHandler::HandleDeepLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"HandleDeepLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeepLinkHandler::OnWitchbloodCollabResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"OnWitchbloodCollabResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedRequest);
}
inline void GlobalNamespace::DeepLinkHandler::OnRaccoonLagoonCollabResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"OnRaccoonLagoonCollabResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedRequest);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::DeepLinkHandler::CheckProcessExternalUnlock(::ArrayW<::StringW>  itemIDs, bool  autoEquip, bool  isLeftHand, bool  destroyOnFinish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {"CheckProcessExternalUnlock", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, itemIDs, autoEquip, isLeftHand, destroyOnFinish);
}
inline void GlobalNamespace::DeepLinkHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeepLinkHandler* GlobalNamespace::DeepLinkHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeepLinkHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeepLinkHandler::DeepLinkHandler()   {
}
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)(int32_t)>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5799f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)()>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579a81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)()>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x579a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)()>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)()>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x579a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::*)()>(&::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___url = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_contentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_contentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set_contentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentType = value;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set_callback(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeepLinkHandler__ProcessWebRequest_d__11::DeepLinkHandler__ProcessWebRequest_d__11()   {
}
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)(int32_t)>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x579a4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)()>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x579a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)()>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x579a624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)()>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579a7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)()>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x579a7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::*)()>(&::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579a814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_itemIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_itemIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set_itemIDs(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIDs = value;
}
constexpr bool& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_autoEquip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoEquip;
}
constexpr bool const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_autoEquip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoEquip;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set_autoEquip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoEquip = value;
}
constexpr bool& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr bool& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_destroyOnFinish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnFinish;
}
constexpr bool const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get_destroyOnFinish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyOnFinish;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set_destroyOnFinish(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyOnFinish = value;
}
constexpr ::UnityW<::GlobalNamespace::DeepLinkHandler>& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::DeepLinkHandler> const& GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DeepLinkHandler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeepLinkHandler__CheckProcessExternalUnlock_d__15::DeepLinkHandler__CheckProcessExternalUnlock_d__15()   {
}
//  Writing Method size for method: ::GlobalNamespace::DeepLinkHandler_CollabRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeepLinkHandler_CollabRequest::*)()>(&::GlobalNamespace::DeepLinkHandler_CollabRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5799fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler_CollabRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_itemGUID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemGUID;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_itemGUID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemGUID;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_itemGUID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemGUID = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_launchSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSource;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_launchSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSource;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_launchSource(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSource = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_oculusUserID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusUserID;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_oculusUserID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusUserID;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_oculusUserID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oculusUserID = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_playFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_playFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_playFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabID = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_playFabSessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabSessionTicket;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_playFabSessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabSessionTicket;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_playFabSessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabSessionTicket = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_mothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_get_mothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr void GlobalNamespace::DeepLinkHandler_CollabRequest::__cordl_internal_set_mothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipEnvId = value;
}
inline void GlobalNamespace::DeepLinkHandler_CollabRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeepLinkHandler_CollabRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeepLinkHandler_CollabRequest* GlobalNamespace::DeepLinkHandler_CollabRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeepLinkHandler_CollabRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeepLinkHandler_CollabRequest::DeepLinkHandler_CollabRequest()   {
}
