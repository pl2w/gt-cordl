#pragma once
// IWYU pragma private; include "GlobalNamespace/StringEnum_1.hpp"
#include "GlobalNamespace/zzzz__StringEnum_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TEnum>
inline TEnum GlobalNamespace::StringEnum_1<TEnum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(*this, ___internal_method);
}
template<typename TEnum>
inline ::GlobalNamespace::StringEnum_1<TEnum> GlobalNamespace::StringEnum_1<TEnum>::op_Implicit___GlobalNamespace__StringEnum_1_TEnum_(TEnum  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(),
                        {"op_Implicit", {}, {::i2c::type_of<TEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringEnum_1<TEnum>>(nullptr, ___internal_method, e);
}
template<typename TEnum>
inline TEnum GlobalNamespace::StringEnum_1<TEnum>::op_Implicit_TEnum(::GlobalNamespace::StringEnum_1<TEnum>  se)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::StringEnum_1<TEnum>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, se);
}
template<typename TEnum>
inline bool GlobalNamespace::StringEnum_1<TEnum>::op_Equality(::GlobalNamespace::StringEnum_1<TEnum>  left, ::GlobalNamespace::StringEnum_1<TEnum>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::StringEnum_1<TEnum>>(), ::i2c::type_of<::GlobalNamespace::StringEnum_1<TEnum>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template<typename TEnum>
inline bool GlobalNamespace::StringEnum_1<TEnum>::op_Inequality(::GlobalNamespace::StringEnum_1<TEnum>  left, ::GlobalNamespace::StringEnum_1<TEnum>  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::StringEnum_1<TEnum>>(), ::i2c::type_of<::GlobalNamespace::StringEnum_1<TEnum>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template<typename TEnum>
inline bool GlobalNamespace::StringEnum_1<TEnum>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename TEnum>
inline int32_t GlobalNamespace::StringEnum_1<TEnum>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TEnum>
inline ::StringW GlobalNamespace::StringEnum_1<TEnum>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StringEnum_1<TEnum>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_EnumValue", ty: "TEnum", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TEnum>
constexpr ::GlobalNamespace::StringEnum_1<TEnum>::StringEnum_1(TEnum  m_EnumValue) noexcept  {
this->m_EnumValue = m_EnumValue;
}
// Ctor Parameters []
template<typename TEnum>
constexpr ::GlobalNamespace::StringEnum_1<TEnum>::StringEnum_1()   {
}
