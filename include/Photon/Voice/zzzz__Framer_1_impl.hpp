#pragma once
// IWYU pragma private; include "Photon/Voice/Framer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__Framer_1_def.hpp"
#include "Photon/Voice/zzzz__Framer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::Framer_1<T>::__cordl_internal_get_frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::Framer_1<T>::__cordl_internal_get_frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frame;
}
template<typename T>
constexpr void Photon::Voice::Framer_1<T>::__cordl_internal_set_frame(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frame = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::Framer_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& Photon::Voice::Framer_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void Photon::Voice::Framer_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::Framer_1<T>::__cordl_internal_get_framePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePos;
}
template<typename T>
constexpr int32_t const& Photon::Voice::Framer_1<T>::__cordl_internal_get_framePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___framePos;
}
template<typename T>
constexpr void Photon::Voice::Framer_1<T>::__cordl_internal_set_framePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___framePos = value;
}
template<typename T>
inline void Photon::Voice::Framer_1<T>::_ctor(int32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameSize);
}
template<typename T>
inline int32_t Photon::Voice::Framer_1<T>::Count(int32_t  bufLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1<T>*>(),
                        {"Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bufLen);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>* Photon::Voice::Framer_1<T>::Frame(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1<T>*>(),
                        {"Frame", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>*>(this, ___internal_method, buf);
}
template<typename T>
inline ::Photon::Voice::Framer_1<T>* Photon::Voice::Framer_1<T>::New_ctor(int32_t  frameSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Framer_1<T>*>(frameSize));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::Framer_1<T>::Framer_1()   {
}
template<typename T>
constexpr int32_t& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set___2__current(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::Photon::Voice::Framer_1<T>*& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Photon::Voice::Framer_1<T>* const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set___4__this(::Photon::Voice::Framer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buf;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set_buf(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buf = value;
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___3__buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__buf;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get___3__buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__buf;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set___3__buf(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__buf = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get__bufPos_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufPos_5__2;
}
template<typename T>
constexpr int32_t const& Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_get__bufPos_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufPos_5__2;
}
template<typename T>
constexpr void Photon::Voice::Framer_1__Frame_d__5<T>::__cordl_internal_set__bufPos_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufPos_5__2 = value;
}
template<typename T>
inline void Photon::Voice::Framer_1__Frame_d__5<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void Photon::Voice::Framer_1__Frame_d__5<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::Framer_1__Frame_d__5<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::Framer_1__Frame_d__5<T>::System_Collections_Generic_IEnumerator_T____get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T[]>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::Framer_1__Frame_d__5<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Photon::Voice::Framer_1__Frame_d__5<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>* Photon::Voice::Framer_1__Frame_d__5<T>::System_Collections_Generic_IEnumerable_T____GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T[]>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Photon::Voice::Framer_1__Frame_d__5<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Framer_1__Frame_d__5<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::Photon::Voice::Framer_1__Frame_d__5<T>* Photon::Voice::Framer_1__Frame_d__5<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Framer_1__Frame_d__5<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>"
template<typename T>
constexpr  Photon::Voice::Framer_1__Frame_d__5<T>::operator ::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>* Photon::Voice::Framer_1__Frame_d__5<T>::i___System__Collections__Generic__IEnumerable_1___ArrayW_T__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Photon::Voice::Framer_1__Frame_d__5<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Photon::Voice::Framer_1__Frame_d__5<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>"
template<typename T>
constexpr  Photon::Voice::Framer_1__Frame_d__5<T>::operator ::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>* Photon::Voice::Framer_1__Frame_d__5<T>::i___System__Collections__Generic__IEnumerator_1___ArrayW_T__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::ArrayW<T>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  Photon::Voice::Framer_1__Frame_d__5<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* Photon::Voice::Framer_1__Frame_d__5<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::Framer_1__Frame_d__5<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::Framer_1__Frame_d__5<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::Framer_1__Frame_d__5<T>::Framer_1__Frame_d__5()   {
}
