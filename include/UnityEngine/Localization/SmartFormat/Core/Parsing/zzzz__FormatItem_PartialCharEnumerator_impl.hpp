#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/FormatItem_PartialCharEnumerator.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_PartialCharEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__FormatItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FormatItem_PartialCharEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FormatItem_PartialCharEnumerator::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::FormatItem_PartialCharEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb045b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormatItem_PartialCharEnumerator.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<char16_t>* (::GlobalNamespace::FormatItem_PartialCharEnumerator::*)()>(&::GlobalNamespace::FormatItem_PartialCharEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb045bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FormatItem_PartialCharEnumerator.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::FormatItem_PartialCharEnumerator::*)()>(&::GlobalNamespace::FormatItem_PartialCharEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb045c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FormatItem_PartialCharEnumerator::_ctor(::StringW  s, int32_t  from, int32_t  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s, from, to);
}
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GlobalNamespace::FormatItem_PartialCharEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<char16_t>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FormatItem_PartialCharEnumerator::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FormatItem_PartialCharEnumerator>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr  GlobalNamespace::FormatItem_PartialCharEnumerator::operator ::System::Collections::Generic::IEnumerable_1<char16_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* GlobalNamespace::FormatItem_PartialCharEnumerator::i___System__Collections__Generic__IEnumerable_1_char16_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  GlobalNamespace::FormatItem_PartialCharEnumerator::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::FormatItem_PartialCharEnumerator::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BaseString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_From", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_To", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FormatItem_PartialCharEnumerator::FormatItem_PartialCharEnumerator(::StringW  m_BaseString, int32_t  m_From, int32_t  m_To) noexcept  {
this->m_BaseString = m_BaseString;
this->m_From = m_From;
this->m_To = m_To;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FormatItem_PartialCharEnumerator::FormatItem_PartialCharEnumerator()   {
}
