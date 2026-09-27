#pragma once
// IWYU pragma private; include "Fusion/FusionGlobalScriptableObject.hpp"
#include "Fusion/zzzz__FusionScriptableObject_impl.hpp"
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObjectSourceAttribute_def.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObject.get_SourceAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> (*)()>(&::Fusion::FusionGlobalScriptableObject::get_SourceAttributes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f3e15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject*>(),
                        {"get_SourceAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObject::*)()>(&::Fusion::FusionGlobalScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionGlobalScriptableObject::setStaticF_s_sourceAttributes(::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*  value)  {
::cordl_internals::setStaticField<::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*, "s_sourceAttributes", ::Fusion::FusionGlobalScriptableObject*>(std::forward<::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*>(value));
}
inline ::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>* Fusion::FusionGlobalScriptableObject::getStaticF_s_sourceAttributes()  {
return ::cordl_internals::getStaticField<::System::Lazy_1<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>*, "s_sourceAttributes", ::Fusion::FusionGlobalScriptableObject*>();
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline ::System::Collections::Generic::IEnumerable_1<T>* Fusion::FusionGlobalScriptableObject::GetAssemblyAttributes()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::FusionGlobalScriptableObject*>(),
                    {"GetAssemblyAttributes", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method);
}
inline ::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> Fusion::FusionGlobalScriptableObject::get_SourceAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject*>(),
                        {"get_SourceAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>(nullptr, ___internal_method);
}
inline void Fusion::FusionGlobalScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::FusionGlobalScriptableObject* Fusion::FusionGlobalScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObject*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObject::FusionGlobalScriptableObject()   {
}
template<typename T>
constexpr int32_t& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr T& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr T const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___2__current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::ArrayW<::System::Reflection::Assembly*>& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
template<typename T>
constexpr ::ArrayW<::System::Reflection::Assembly*> const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__1;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___s__1(::ArrayW<::System::Reflection::Assembly*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__1 = value;
}
template<typename T>
constexpr int32_t& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
template<typename T>
constexpr int32_t const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___s__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
template<typename T>
constexpr ::System::Reflection::Assembly*& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get__assembly_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembly_5__3;
}
template<typename T>
constexpr ::System::Reflection::Assembly* const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get__assembly_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assembly_5__3;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set__assembly_5__3(::System::Reflection::Assembly*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assembly_5__3 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get___s__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__4;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set___s__4(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__4 = value;
}
template<typename T>
constexpr T& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get__attr_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attr_5__5;
}
template<typename T>
constexpr T const& Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_get__attr_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attr_5__5;
}
template<typename T>
constexpr void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__cordl_internal_set__attr_5__5(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attr_5__5 = value;
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1<T>::FusionGlobalScriptableObject__GetAssemblyAttributes_d__0_1()   {
}
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObject___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::FusionGlobalScriptableObject___c::*)()>(&::Fusion::FusionGlobalScriptableObject___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3e364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObject___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> (::Fusion::FusionGlobalScriptableObject___c::*)()>(&::Fusion::FusionGlobalScriptableObject___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5f3e36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionGlobalScriptableObject___c.__cctor_b__5_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FusionGlobalScriptableObject___c::*)(::Fusion::FusionGlobalScriptableObjectSourceAttribute*)>(&::Fusion::FusionGlobalScriptableObject___c::__cctor_b__5_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3e4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {"<.cctor>b__5_1", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionGlobalScriptableObject___c::setStaticF___9(::Fusion::FusionGlobalScriptableObject___c*  value)  {
::cordl_internals::setStaticField<::Fusion::FusionGlobalScriptableObject___c*, "<>9", ::Fusion::FusionGlobalScriptableObject___c*>(std::forward<::Fusion::FusionGlobalScriptableObject___c*>(value));
}
inline ::Fusion::FusionGlobalScriptableObject___c* Fusion::FusionGlobalScriptableObject___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::FusionGlobalScriptableObject___c*, "<>9", ::Fusion::FusionGlobalScriptableObject___c*>();
}
inline void Fusion::FusionGlobalScriptableObject___c::setStaticF___9__5_1(::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*, "<>9__5_1", ::Fusion::FusionGlobalScriptableObject___c*>(std::forward<::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*>(value));
}
inline ::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>* Fusion::FusionGlobalScriptableObject___c::getStaticF___9__5_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Fusion::FusionGlobalScriptableObjectSourceAttribute*,int32_t>*, "<>9__5_1", ::Fusion::FusionGlobalScriptableObject___c*>();
}
inline void Fusion::FusionGlobalScriptableObject___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*> Fusion::FusionGlobalScriptableObject___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>>(this, ___internal_method);
}
inline int32_t Fusion::FusionGlobalScriptableObject___c::__cctor_b__5_1(::Fusion::FusionGlobalScriptableObjectSourceAttribute*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionGlobalScriptableObject___c*>(),
                        {"<.cctor>b__5_1", {}, {::i2c::type_of<::Fusion::FusionGlobalScriptableObjectSourceAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::Fusion::FusionGlobalScriptableObject___c* Fusion::FusionGlobalScriptableObject___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::FusionGlobalScriptableObject___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::FusionGlobalScriptableObject___c::FusionGlobalScriptableObject___c()   {
}
