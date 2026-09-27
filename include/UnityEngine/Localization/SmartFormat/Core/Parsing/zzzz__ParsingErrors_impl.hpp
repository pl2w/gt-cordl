#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/ParsingErrors.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrors_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrors_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb046f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.get_Issues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>* (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_Issues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_Issues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.get_HasIssues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_HasIssues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb046fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_HasIssues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.get_MessageShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_MessageShort)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb047014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_MessageShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_Message)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0xb047230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors.AddIssue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::AddIssue)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb047784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"AddIssue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb0478d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_set_result(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_get__Issues_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Issues_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>* const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_get__Issues_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Issues_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::__cordl_internal_set__Issues_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Issues_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::Init(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_Issues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_Issues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_HasIssues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_HasIssues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_MessageShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"get_MessageShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::get_Message()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::AddIssue(::StringW  issue, int32_t  startIndex, int32_t  endIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {"AddIssue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issue, startIndex, endIndex);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors::ParsingErrors()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c._get_MessageShort_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_get_MessageShort_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb047a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {"<get_MessageShort>b__9_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c._get_Message_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_get_Message_b__11_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb047a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {"<get_Message>b__11_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::setStaticF___9(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(std::forward<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*, "<>9", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*, "<>9__9_0", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(std::forward<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*, "<>9__9_0", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::setStaticF___9__11_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*, "<>9__11_0", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(std::forward<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*,::StringW>*, "<>9__11_0", ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>();
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_get_MessageShort_b__9_0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {"<get_MessageShort>b__9_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::_get_Message_b__11_0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>(),
                        {"<get_Message>b__11_0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, i);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors___c::ParsingErrors___c()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb047890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue.get_Index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Index)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04798c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue.get_Issue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Issue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb047994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Issue", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Index_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Index_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Index_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_set__Index_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Index_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Length_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Length_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_set__Length_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Length_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Issue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Issue_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_get__Issue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Issue_k__BackingField;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::__cordl_internal_set__Issue_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Issue_k__BackingField = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::_ctor(::StringW  issue, int32_t  index, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, issue, index, length);
}
inline int32_t UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::get_Issue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(),
                        {"get_Issue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue* UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::New_ctor(::StringW  issue, int32_t  index, int32_t  length)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>(issue, index, length));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue::ParsingErrors_ParsingIssue()   {
}
