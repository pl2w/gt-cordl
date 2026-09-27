#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SceneLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__SceneLoader_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__SceneLoader_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader::*)(::StringW)>(&::Oculus::Interaction::Samples::SceneLoader::Load)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa44026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader.HandleReadyToLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader::*)(::StringW)>(&::Oculus::Interaction::Samples::SceneLoader::HandleReadyToLoad)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4403f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"HandleReadyToLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Samples::SceneLoader::*)(::StringW)>(&::Oculus::Interaction::Samples::SceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa440428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader::*)()>(&::Oculus::Interaction::Samples::SceneLoader::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4404d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get__loading()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loading;
}
constexpr bool const& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get__loading() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loading;
}
constexpr void Oculus::Interaction::Samples::SceneLoader::__cordl_internal_set__loading(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loading = value;
}
constexpr ::System::Action_1<::StringW>*& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get_WhenLoadingScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLoadingScene;
}
constexpr ::System::Action_1<::StringW>* const& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get_WhenLoadingScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLoadingScene;
}
constexpr void Oculus::Interaction::Samples::SceneLoader::__cordl_internal_set_WhenLoadingScene(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLoadingScene = value;
}
constexpr ::System::Action_1<::StringW>*& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get_WhenSceneLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSceneLoaded;
}
constexpr ::System::Action_1<::StringW>* const& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get_WhenSceneLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSceneLoaded;
}
constexpr void Oculus::Interaction::Samples::SceneLoader::__cordl_internal_set_WhenSceneLoaded(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSceneLoaded = value;
}
constexpr int32_t& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get__waitingCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingCount;
}
constexpr int32_t const& Oculus::Interaction::Samples::SceneLoader::__cordl_internal_get__waitingCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitingCount;
}
constexpr void Oculus::Interaction::Samples::SceneLoader::__cordl_internal_set__waitingCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitingCount = value;
}
inline void Oculus::Interaction::Samples::SceneLoader::Load(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline void Oculus::Interaction::Samples::SceneLoader::HandleReadyToLoad(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"HandleReadyToLoad", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneName);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Samples::SceneLoader::LoadSceneAsync(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {"LoadSceneAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, sceneName);
}
inline void Oculus::Interaction::Samples::SceneLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SceneLoader* Oculus::Interaction::Samples::SceneLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneLoader*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneLoader::SceneLoader()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)(int32_t)>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4404b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)()>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4406dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)()>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4406e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)()>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4407d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)()>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4407d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::*)()>(&::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get_sceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr ::StringW const& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get_sceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_set_sceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneName = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader>& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader> const& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SceneLoader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::AsyncOperation*& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get__asyncLoad_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncLoad_5__2;
}
constexpr ::UnityEngine::AsyncOperation* const& Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_get__asyncLoad_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncLoad_5__2;
}
constexpr void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::__cordl_internal_set__asyncLoad_5__2(::UnityEngine::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncLoad_5__2 = value;
}
inline void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6::SceneLoader__LoadSceneAsync_d__6()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader___c::*)()>(&::Oculus::Interaction::Samples::SceneLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4406cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader___c.__ctor_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader___c::*)(::StringW)>(&::Oculus::Interaction::Samples::SceneLoader___c::__ctor_b__7_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4406d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {"<.ctor>b__7_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SceneLoader___c.__ctor_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SceneLoader___c::*)(::StringW)>(&::Oculus::Interaction::Samples::SceneLoader___c::__ctor_b__7_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4406d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {"<.ctor>b__7_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::SceneLoader___c::setStaticF___9(::Oculus::Interaction::Samples::SceneLoader___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Samples::SceneLoader___c*, "<>9", ::Oculus::Interaction::Samples::SceneLoader___c*>(std::forward<::Oculus::Interaction::Samples::SceneLoader___c*>(value));
}
inline ::Oculus::Interaction::Samples::SceneLoader___c* Oculus::Interaction::Samples::SceneLoader___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Samples::SceneLoader___c*, "<>9", ::Oculus::Interaction::Samples::SceneLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneLoader___c::setStaticF___9__7_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__7_0", ::Oculus::Interaction::Samples::SceneLoader___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* Oculus::Interaction::Samples::SceneLoader___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__7_0", ::Oculus::Interaction::Samples::SceneLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneLoader___c::setStaticF___9__7_1(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__7_1", ::Oculus::Interaction::Samples::SceneLoader___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* Oculus::Interaction::Samples::SceneLoader___c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__7_1", ::Oculus::Interaction::Samples::SceneLoader___c*>();
}
inline void Oculus::Interaction::Samples::SceneLoader___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SceneLoader___c::__ctor_b__7_0(::StringW  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {"<.ctor>b__7_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::Samples::SceneLoader___c::__ctor_b__7_1(::StringW  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SceneLoader___c*>(),
                        {"<.ctor>b__7_1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Samples::SceneLoader___c* Oculus::Interaction::Samples::SceneLoader___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SceneLoader___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SceneLoader___c::SceneLoader___c()   {
}
