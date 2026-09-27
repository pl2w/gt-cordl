#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHDraw.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BVHDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHDraw_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNodeDrawInfo_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHDraw::*)(::Fusion::LagCompensation::HitboxBuffer*)>(&::Fusion::LagCompensation::BVHDraw::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60181c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* (::Fusion::LagCompensation::BVHDraw::*)()>(&::Fusion::LagCompensation::BVHDraw::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60188c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Fusion::LagCompensation::BVHDraw::*)()>(&::Fusion::LagCompensation::BVHDraw::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6018954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LagCompensation::HitboxBuffer*& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::Fusion::LagCompensation::HitboxBuffer* const& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Fusion::LagCompensation::BVHDraw::__cordl_internal_set__buffer(::Fusion::LagCompensation::HitboxBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo*& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__drawInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawInfo;
}
constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo* const& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__drawInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawInfo;
}
constexpr void Fusion::LagCompensation::BVHDraw::__cordl_internal_set__drawInfo(::Fusion::LagCompensation::BVHNodeDrawInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drawInfo = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__reusableStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reusableStack;
}
constexpr ::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>* const& Fusion::LagCompensation::BVHDraw::__cordl_internal_get__reusableStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reusableStack;
}
constexpr void Fusion::LagCompensation::BVHDraw::__cordl_internal_set__reusableStack(::System::Collections::Generic::Stack_1<::Fusion::LagCompensation::BVHNode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reusableStack = value;
}
inline void Fusion::LagCompensation::BVHDraw::_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* Fusion::LagCompensation::BVHDraw::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Fusion::LagCompensation::BVHDraw::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::BVHDraw* Fusion::LagCompensation::BVHDraw::New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BVHDraw*>(buffer));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr  Fusion::LagCompensation::BVHDraw::operator ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* Fusion::LagCompensation::BVHDraw::i___System__Collections__Generic__IEnumerable_1___Fusion__LagCompensation__BVHNodeDrawInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Fusion::LagCompensation::BVHDraw::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Fusion::LagCompensation::BVHDraw::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BVHDraw::BVHDraw()   {
}
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)(int32_t)>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x601892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)()>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6018958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)()>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x6018988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4.System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::BVHNodeDrawInfo* (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)()>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.LagCompensation.BVHNodeDrawInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)()>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6018d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::*)()>(&::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo*& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo* const& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_set___2__current(::Fusion::LagCompensation::BVHNodeDrawInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Fusion::LagCompensation::BVHDraw*& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Fusion::LagCompensation::BVHDraw* const& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_set___4__this(::Fusion::LagCompensation::BVHDraw*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Fusion::LagCompensation::BVHNode& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get__node_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node_5__1;
}
constexpr ::Fusion::LagCompensation::BVHNode const& Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_get__node_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node_5__1;
}
constexpr void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::__cordl_internal_set__node_5__1(::Fusion::LagCompensation::BVHNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____node_5__1 = value;
}
inline void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::BVHNodeDrawInfo* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_Generic_IEnumerator_Fusion_LagCompensation_BVHNodeDrawInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<Fusion.LagCompensation.BVHNodeDrawInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::BVHNodeDrawInfo*>(this, ___internal_method);
}
inline void Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr  Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::operator ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::i___System__Collections__Generic__IEnumerator_1___Fusion__LagCompensation__BVHNodeDrawInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::LagCompensation::BVHNodeDrawInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BVHDraw__GetEnumerator_d__4::BVHDraw__GetEnumerator_d__4()   {
}
