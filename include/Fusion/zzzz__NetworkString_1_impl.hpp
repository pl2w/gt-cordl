#pragma once
// IWYU pragma private; include "Fusion/NetworkString_1.hpp"
#include "Fusion/zzzz__IFixedStorage_impl.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz__INetworkString_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__UTF32Tools_CharEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSize>
inline void Fusion::NetworkString_1<TSize>::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TSize>
inline ::StringW Fusion::NetworkString_1<TSize>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename TSize>
inline void Fusion::NetworkString_1<TSize>::set_Value(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"set_Value", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TSize>
inline ::by_ref<uint32_t> Fusion::NetworkString_1<TSize>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<uint32_t>>(*this, ___internal_method, index);
}
template<typename TSize>
inline ::Fusion::NetworkString_1<TSize> Fusion::NetworkString_1<TSize>::op_Implicit___Fusion__NetworkString_1_TSize_(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<TSize>>(nullptr, ___internal_method, str);
}
template<typename TSize>
inline ::StringW Fusion::NetworkString_1<TSize>::op_Explicit___StringW(::Fusion::NetworkString_1<TSize>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Inequality(::Fusion::NetworkString_1<TSize>  a, ::Fusion::NetworkString_1<TSize>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>(), ::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Inequality(::StringW  a, ::Fusion::NetworkString_1<TSize>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Inequality(::Fusion::NetworkString_1<TSize>  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Equality(::Fusion::NetworkString_1<TSize>  a, ::Fusion::NetworkString_1<TSize>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>(), ::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Equality(::StringW  a, ::Fusion::NetworkString_1<TSize>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Equality", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::op_Equality(::Fusion::NetworkString_1<TSize>  a, ::StringW  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Get(::by_ref<::StringW>  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, cache);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Set(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Set", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(char16_t  c, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, c, startIndex);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(char16_t  c, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, c, startIndex, count);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(uint32_t  codePoint, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, codePoint, startIndex);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(uint32_t  codePoint, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, codePoint, startIndex, count);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::StringW  str, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::StringW  str, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex, count);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::Fusion::NetworkString_1<TOtherSize>  str, int32_t  startIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"IndexOf", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::Fusion::NetworkString_1<TOtherSize>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::Fusion::NetworkString_1<TOtherSize>  str, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"IndexOf", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::Fusion::NetworkString_1<TOtherSize>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex, count);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str, int32_t  startIndex)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"IndexOf", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::IndexOf(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str, int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"IndexOf", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str, startIndex, count);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Contains(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Contains", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, c);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Contains(uint32_t  codePoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Contains", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, codePoint);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Contains(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::Contains(::Fusion::NetworkString_1<TOtherSize>  str)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Contains", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::Fusion::NetworkString_1<TOtherSize>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::Contains(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  str)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Contains", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, str);
}
template<typename TSize>
inline ::Fusion::NetworkString_1<TSize> Fusion::NetworkString_1<TSize>::Substring(int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Substring", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<TSize>>(*this, ___internal_method, startIndex);
}
template<typename TSize>
inline ::Fusion::NetworkString_1<TSize> Fusion::NetworkString_1<TSize>::Substring(int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Substring", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<TSize>>(*this, ___internal_method, startIndex, length);
}
template<typename TSize>
inline ::Fusion::NetworkString_1<TSize> Fusion::NetworkString_1<TSize>::ToLower()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"ToLower", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<TSize>>(*this, ___internal_method);
}
template<typename TSize>
inline ::Fusion::NetworkString_1<TSize> Fusion::NetworkString_1<TSize>::ToUpper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"ToUpper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkString_1<TSize>>(*this, ___internal_method);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::GetCharCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"GetCharCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::Compare(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Compare", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, s);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::Compare(::Fusion::NetworkString_1<TSize>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, s);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::Compare(::by_ref<::Fusion::NetworkString_1<TSize>>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Compare", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TSize>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, s);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::Compare(::Fusion::NetworkString_1<TOtherSize>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Compare", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::Fusion::NetworkString_1<TOtherSize>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline int32_t Fusion::NetworkString_1<TSize>::Compare(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Compare", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Equals(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Equals", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, s);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkString_1<TSize>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Equals(::Fusion::NetworkString_1<TSize>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkString_1<TSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::Equals(::by_ref<::Fusion::NetworkString_1<TSize>>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TSize>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::Equals(::Fusion::NetworkString_1<TOtherSize>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Equals", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::Fusion::NetworkString_1<TOtherSize>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::Equals(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"Equals", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
inline void Fusion::NetworkString_1<TSize>::Assign(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"Assign", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::StartsWith(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"StartsWith", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, s);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::StartsWith(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"StartsWith", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
template<typename TOtherSize>
requires(::cordl_internals::type_constraint<TOtherSize, ::Fusion::IFixedStorage*> && ::cordl_internals::value_type_constraint<TOtherSize> && ::cordl_internals::default_constructor_constraint<TOtherSize>)
inline bool Fusion::NetworkString_1<TSize>::EndsWith(::by_ref<::Fusion::NetworkString_1<TOtherSize>>  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                    {"EndsWith", {::i2c::class_of<TOtherSize>()}, {::i2c::type_of<::by_ref<::Fusion::NetworkString_1<TOtherSize>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOtherSize>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TSize>
inline bool Fusion::NetworkString_1<TSize>::EndsWith(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"EndsWith", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, s);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkString_1<TSize>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TSize>
inline ::StringW Fusion::NetworkString_1<TSize>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkString_1<TSize>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename TSize>
inline ::GlobalNamespace::UTF32Tools_CharEnumerator Fusion::NetworkString_1<TSize>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UTF32Tools_CharEnumerator>(*this, ___internal_method);
}
template<typename TSize>
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* Fusion::NetworkString_1<TSize>::System_Collections_Generic_IEnumerable_System_Char__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*>(*this, ___internal_method);
}
template<typename TSize>
inline ::System::Collections::IEnumerator* Fusion::NetworkString_1<TSize>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::SafeIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"SafeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
template<typename TSize>
inline int32_t Fusion::NetworkString_1<TSize>::get_SafeLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkString_1<TSize>>(),
                        {"get_SafeLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkString"
template<typename TSize>
constexpr  Fusion::NetworkString_1<TSize>::operator ::Fusion::INetworkString*()  {
return static_cast<::Fusion::INetworkString*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkString"
template<typename TSize>
constexpr ::Fusion::INetworkString* Fusion::NetworkString_1<TSize>::i___Fusion__INetworkString()  {
return static_cast<::Fusion::INetworkString*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
template<typename TSize>
constexpr  Fusion::NetworkString_1<TSize>::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
template<typename TSize>
constexpr ::Fusion::INetworkStruct* Fusion::NetworkString_1<TSize>::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>"
template<typename TSize>
constexpr  Fusion::NetworkString_1<TSize>::operator ::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>"
template<typename TSize>
constexpr ::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>* Fusion::NetworkString_1<TSize>::i___System__IEquatable_1___Fusion__NetworkString_1_TSize__()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkString_1<TSize>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
template<typename TSize>
constexpr  Fusion::NetworkString_1<TSize>::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
template<typename TSize>
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* Fusion::NetworkString_1<TSize>::i___System__Collections__Generic__IEnumerable_1_char16_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TSize>
constexpr  Fusion::NetworkString_1<TSize>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TSize>
constexpr ::System::Collections::IEnumerable* Fusion::NetworkString_1<TSize>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data", ty: "TSize", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TSize>
constexpr ::Fusion::NetworkString_1<TSize>::NetworkString_1(int32_t  _length, TSize  _data) noexcept  {
this->_length = _length;
this->_data = _data;
}
// Ctor Parameters []
template<typename TSize>
constexpr ::Fusion::NetworkString_1<TSize>::NetworkString_1()   {
}
