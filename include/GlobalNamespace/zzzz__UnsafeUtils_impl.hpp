#pragma once
// IWYU pragma private; include "GlobalNamespace/UnsafeUtils.hpp"
#include "GlobalNamespace/zzzz__UnsafeUtils_impl.hpp"
#include "System/zzzz__Delegate_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnsafeUtils_def.hpp"
#include "GlobalNamespace/zzzz__UnsafeUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline ::by_ref<::ArrayW<T>> GlobalNamespace::UnsafeUtils::GetInternalArray(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnsafeUtils*>(),
                    {"GetInternalArray", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<T>>>(nullptr, ___internal_method, list);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::MulticastDelegate*>)
inline ::by_ref<::ArrayW<T>> GlobalNamespace::UnsafeUtils::GetInvocationListUnsafe(T  delegate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UnsafeUtils*>(),
                    {"GetInvocationListUnsafe", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<T>>>(nullptr, ___internal_method, delegate);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeUtils::UnsafeUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::UnsafeUtils__DelegateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsafeUtils__DelegateData::*)()>(&::GlobalNamespace::UnsafeUtils__DelegateData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__DelegateData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_target_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target_type;
}
constexpr ::System::Type* const& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_target_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target_type;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_set_target_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target_type = value;
}
constexpr ::StringW& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_method_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_name;
}
constexpr ::StringW const& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_method_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_name;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_set_method_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method_name = value;
}
constexpr bool& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_curried_first_arg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curried_first_arg;
}
constexpr bool const& GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_get_curried_first_arg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curried_first_arg;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateData::__cordl_internal_set_curried_first_arg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curried_first_arg = value;
}
inline void GlobalNamespace::UnsafeUtils__DelegateData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__DelegateData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnsafeUtils__DelegateData* GlobalNamespace::UnsafeUtils__DelegateData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnsafeUtils__DelegateData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeUtils__DelegateData::UnsafeUtils__DelegateData()   {
}
//  Writing Method size for method: ::GlobalNamespace::UnsafeUtils__MultiDelegateFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsafeUtils__MultiDelegateFields::*)()>(&::GlobalNamespace::UnsafeUtils__MultiDelegateFields::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__MultiDelegateFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Delegate*>& GlobalNamespace::UnsafeUtils__MultiDelegateFields::__cordl_internal_get_delegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr ::ArrayW<::System::Delegate*> const& GlobalNamespace::UnsafeUtils__MultiDelegateFields::__cordl_internal_get_delegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegates;
}
constexpr void GlobalNamespace::UnsafeUtils__MultiDelegateFields::__cordl_internal_set_delegates(::ArrayW<::System::Delegate*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delegates = value;
}
inline void GlobalNamespace::UnsafeUtils__MultiDelegateFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__MultiDelegateFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnsafeUtils__MultiDelegateFields* GlobalNamespace::UnsafeUtils__MultiDelegateFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnsafeUtils__MultiDelegateFields*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeUtils__MultiDelegateFields::UnsafeUtils__MultiDelegateFields()   {
}
//  Writing Method size for method: ::GlobalNamespace::UnsafeUtils__DelegateFields._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnsafeUtils__DelegateFields::*)()>(&::GlobalNamespace::UnsafeUtils__DelegateFields::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__DelegateFields*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_ptr;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_ptr;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_method_ptr(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method_ptr = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_invoke_impl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invoke_impl;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_invoke_impl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invoke_impl;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_invoke_impl(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invoke_impl = value;
}
constexpr ::System::Object*& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_m_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_target;
}
constexpr ::System::Object* const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_m_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_target;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_m_target(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_target = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_method(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_delegate_trampoline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate_trampoline;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_delegate_trampoline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate_trampoline;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_delegate_trampoline(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delegate_trampoline = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_extra_arg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extra_arg;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_extra_arg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extra_arg;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_extra_arg(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extra_arg = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_code;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_code;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_method_code(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method_code = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_interp_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interp_method;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_interp_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interp_method;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_interp_method(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interp_method = value;
}
constexpr ::System::IntPtr& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_interp_invoke_impl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interp_invoke_impl;
}
constexpr ::System::IntPtr const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_interp_invoke_impl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interp_invoke_impl;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_interp_invoke_impl(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interp_invoke_impl = value;
}
constexpr ::System::Reflection::MethodInfo*& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_info;
}
constexpr ::System::Reflection::MethodInfo* const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_info;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_method_info(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method_info = value;
}
constexpr ::System::Reflection::MethodInfo*& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_original_method_info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___original_method_info;
}
constexpr ::System::Reflection::MethodInfo* const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_original_method_info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___original_method_info;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_original_method_info(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___original_method_info = value;
}
constexpr ::GlobalNamespace::UnsafeUtils__DelegateData*& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::UnsafeUtils__DelegateData* const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_data(::GlobalNamespace::UnsafeUtils__DelegateData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr bool& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_is_virtual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_is_virtual;
}
constexpr bool const& GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_get_method_is_virtual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method_is_virtual;
}
constexpr void GlobalNamespace::UnsafeUtils__DelegateFields::__cordl_internal_set_method_is_virtual(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method_is_virtual = value;
}
inline void GlobalNamespace::UnsafeUtils__DelegateFields::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnsafeUtils__DelegateFields*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnsafeUtils__DelegateFields* GlobalNamespace::UnsafeUtils__DelegateFields::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnsafeUtils__DelegateFields*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnsafeUtils__DelegateFields::UnsafeUtils__DelegateFields()   {
}
