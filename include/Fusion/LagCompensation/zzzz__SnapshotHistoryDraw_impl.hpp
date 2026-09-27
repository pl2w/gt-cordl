#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SnapshotHistoryDraw.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__SnapshotHistoryDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxColliderContainerDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__SnapshotHistoryDraw_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SnapshotHistoryDraw::*)(::Fusion::LagCompensation::HitboxBuffer*)>(&::Fusion::LagCompensation::SnapshotHistoryDraw::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6018144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* (::Fusion::LagCompensation::SnapshotHistoryDraw::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6018510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::LagCompensation::SnapshotHistoryDraw::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60185a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LagCompensation::HitboxBuffer*& Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::Fusion::LagCompensation::HitboxBuffer* const& Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_set__buffer(::Fusion::LagCompensation::HitboxBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw*& Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_get__containerDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containerDraw;
}
constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw* const& Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_get__containerDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containerDraw;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw::__cordl_internal_set__containerDraw(::Fusion::LagCompensation::HitboxColliderContainerDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____containerDraw = value;
}
inline void Fusion::LagCompensation::SnapshotHistoryDraw::_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* Fusion::LagCompensation::SnapshotHistoryDraw::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::LagCompensation::SnapshotHistoryDraw::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::SnapshotHistoryDraw* Fusion::LagCompensation::SnapshotHistoryDraw::New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::SnapshotHistoryDraw*>(buffer));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr  Fusion::LagCompensation::SnapshotHistoryDraw::operator ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* Fusion::LagCompensation::SnapshotHistoryDraw::i___System__Collections__Generic__IEnumerable_1___Fusion__LagCompensation__HitboxColliderContainerDraw__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::LagCompensation::SnapshotHistoryDraw::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::LagCompensation::SnapshotHistoryDraw::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw::SnapshotHistoryDraw()   {
}
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)(int32_t)>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x601857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60185a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60185b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3.System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::HitboxColliderContainerDraw* (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.LagCompensation.HitboxColliderContainerDraw>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6018698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::*)()>(&::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60186d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw*& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Fusion::LagCompensation::HitboxColliderContainerDraw* const& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_set___2__current(::Fusion::LagCompensation::HitboxColliderContainerDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw*& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw* const& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_set___4__this(::Fusion::LagCompensation::SnapshotHistoryDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get__i_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr int32_t const& Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_get__i_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__1;
}
constexpr void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::__cordl_internal_set__i_5__1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__1 = value;
}
inline void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::HitboxColliderContainerDraw* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_Generic_IEnumerator_Fusion_LagCompensation_HitboxColliderContainerDraw__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.LagCompensation.HitboxColliderContainerDraw>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::HitboxColliderContainerDraw*>(this, ___internal_method);
}
inline void Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr  Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::operator ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::i___System__Collections__Generic__IEnumerator_1___Fusion__LagCompensation__HitboxColliderContainerDraw__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::HitboxColliderContainerDraw*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw__GetEnumerator_d__3::SnapshotHistoryDraw__GetEnumerator_d__3()   {
}
