#pragma once
// IWYU pragma private; include "Fusion/FusionCoroutine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionCoroutine_def.hpp"
#include "Fusion/zzzz__IAsyncOperation_def.hpp"
#include "Fusion/zzzz__ICoroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionCoroutine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)(::System::Collections::IEnumerator*)>(&::Fusion::FusionCoroutine::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60e09e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.add_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)(::System::Action_1<::Fusion::IAsyncOperation*>*)>(&::Fusion::FusionCoroutine::add_Completed)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60e0a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action_1<::Fusion::IAsyncOperation*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.remove_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)(::System::Action_1<::Fusion::IAsyncOperation*>*)>(&::Fusion::FusionCoroutine::remove_Completed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60e0b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action_1<::Fusion::IAsyncOperation*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.get_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::get_IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"get_IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.set_IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)(bool)>(&::Fusion::FusionCoroutine::set_IsDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"set_IsDone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(&::Fusion::FusionCoroutine::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"set_Error", {}, {::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x60e0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60e0db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60e0e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionCoroutine.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionCoroutine::*)()>(&::Fusion::FusionCoroutine::Dispose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& Fusion::FusionCoroutine::__cordl_internal_get__inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inner;
}
constexpr ::System::Collections::IEnumerator* const& Fusion::FusionCoroutine::__cordl_internal_get__inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inner;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__inner(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inner = value;
}
constexpr ::System::Action_1<::Fusion::IAsyncOperation*>*& Fusion::FusionCoroutine::__cordl_internal_get__completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completed;
}
constexpr ::System::Action_1<::Fusion::IAsyncOperation*>* const& Fusion::FusionCoroutine::__cordl_internal_get__completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completed;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completed = value;
}
constexpr float_t& Fusion::FusionCoroutine::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr float_t const& Fusion::FusionCoroutine::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::System::Action*& Fusion::FusionCoroutine::__cordl_internal_get__activateAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateAsync;
}
constexpr ::System::Action* const& Fusion::FusionCoroutine::__cordl_internal_get__activateAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activateAsync;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__activateAsync(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activateAsync = value;
}
constexpr bool& Fusion::FusionCoroutine::__cordl_internal_get__IsDone_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDone_k__BackingField;
}
constexpr bool const& Fusion::FusionCoroutine::__cordl_internal_get__IsDone_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDone_k__BackingField;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__IsDone_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDone_k__BackingField = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& Fusion::FusionCoroutine::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& Fusion::FusionCoroutine::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Fusion::FusionCoroutine::__cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Fusion::FusionCoroutine::_ctor(::System::Collections::IEnumerator*  inner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inner);
}
inline void Fusion::FusionCoroutine::add_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action_1<::Fusion::IAsyncOperation*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::FusionCoroutine::remove_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action_1<::Fusion::IAsyncOperation*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::FusionCoroutine::get_IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"get_IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionCoroutine::set_IsDone(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"set_IsDone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Fusion::FusionCoroutine::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
inline void Fusion::FusionCoroutine::set_Error(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"set_Error", {}, {::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::FusionCoroutine::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::FusionCoroutine::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::FusionCoroutine::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Fusion::FusionCoroutine::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionCoroutine*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionCoroutine* Fusion::FusionCoroutine::New_ctor(::System::Collections::IEnumerator*  inner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionCoroutine*>(inner));
}
/// @brief Convert operator to "::Fusion::ICoroutine"
constexpr  Fusion::FusionCoroutine::operator ::Fusion::ICoroutine*() noexcept {
return static_cast<::Fusion::ICoroutine*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ICoroutine"
constexpr ::Fusion::ICoroutine* Fusion::FusionCoroutine::i___Fusion__ICoroutine() noexcept {
return static_cast<::Fusion::ICoroutine*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IAsyncOperation"
constexpr  Fusion::FusionCoroutine::operator ::Fusion::IAsyncOperation*() noexcept {
return static_cast<::Fusion::IAsyncOperation*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAsyncOperation"
constexpr ::Fusion::IAsyncOperation* Fusion::FusionCoroutine::i___Fusion__IAsyncOperation() noexcept {
return static_cast<::Fusion::IAsyncOperation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::FusionCoroutine::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::FusionCoroutine::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::FusionCoroutine::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::FusionCoroutine::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::FusionCoroutine::FusionCoroutine()   {
}
