#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/CharacterSubstitutor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_ListSelectionMethod_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_SubstitutionMethod_impl.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_CharReplacement_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_ListSelectionMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__CharacterSubstitutor_SubstitutionMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__IPseudoLocalizationMethod_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__Message_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__WritableMessageFragment_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_Method", {}, {::i2c::type_of<::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.get_ReplacementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<char16_t,char16_t>* (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ReplacementMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ReplacementMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.set_ReplacementMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_ReplacementMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_ReplacementMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.get_ListMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ListMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ListMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.set_ListMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_ListMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_ListMode", {}, {::i2c::type_of<::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.get_ReplacementList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<char16_t>* (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ReplacementList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb023cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ReplacementList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.GetRandomSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::StringW)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::GetRandomSeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb023cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"GetRandomSeed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.ReplaceCharFromMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(char16_t)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::ReplaceCharFromMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb023cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"ReplaceCharFromMap", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb023d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb023f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.TransformFragment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::UnityEngine::Localization::Pseudo::WritableMessageFragment*)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::TransformFragment)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb024168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"TransformFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)(::UnityEngine::Localization::Pseudo::Message*)>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::Transform)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb0244ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Pseudo::CharacterSubstitutor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Pseudo::CharacterSubstitutor::*)()>(&::UnityEngine::Localization::Pseudo::CharacterSubstitutor::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb023294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_SubstitutionMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubstitutionMethod;
}
constexpr ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_SubstitutionMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubstitutionMethod;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set_m_SubstitutionMethod(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubstitutionMethod = value;
}
constexpr ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ListMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ListMode;
}
constexpr ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ListMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ListMode;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set_m_ListMode(::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ListMode = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementsMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementsMap;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>* const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementsMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementsMap;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set_m_ReplacementsMap(::System::Collections::Generic::List_1<::GlobalNamespace::CharacterSubstitutor_CharReplacement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReplacementsMap = value;
}
constexpr ::System::Collections::Generic::List_1<char16_t>*& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementList;
}
constexpr ::System::Collections::Generic::List_1<char16_t>* const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementList;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set_m_ReplacementList(::System::Collections::Generic::List_1<char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReplacementList = value;
}
constexpr int32_t& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementsPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementsPosition;
}
constexpr int32_t const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get_m_ReplacementsPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReplacementsPosition;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set_m_ReplacementsPosition(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReplacementsPosition = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get__ReplacementMap_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReplacementMap_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>* const& UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_get__ReplacementMap_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReplacementMap_k__BackingField;
}
constexpr void UnityEngine::Localization::Pseudo::CharacterSubstitutor::__cordl_internal_set__ReplacementMap_k__BackingField(::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReplacementMap_k__BackingField = value;
}
inline ::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_Method(::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_Method", {}, {::i2c::type_of<::GlobalNamespace::CharacterSubstitutor_SubstitutionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<char16_t,char16_t>* UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ReplacementMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ReplacementMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_ReplacementMap(::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_ReplacementMap", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<char16_t,char16_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ListMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ListMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::set_ListMode(::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"set_ListMode", {}, {::i2c::type_of<::GlobalNamespace::CharacterSubstitutor_ListSelectionMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<char16_t>* UnityEngine::Localization::Pseudo::CharacterSubstitutor::get_ReplacementList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"get_ReplacementList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<char16_t>*>(this, ___internal_method);
}
inline int32_t UnityEngine::Localization::Pseudo::CharacterSubstitutor::GetRandomSeed(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"GetRandomSeed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline char16_t UnityEngine::Localization::Pseudo::CharacterSubstitutor::ReplaceCharFromMap(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"ReplaceCharFromMap", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::TransformFragment(::UnityEngine::Localization::Pseudo::WritableMessageFragment*  writableFragment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"TransformFragment", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::WritableMessageFragment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writableFragment);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::Transform(::UnityEngine::Localization::Pseudo::Message*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Localization::Pseudo::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::Localization::Pseudo::CharacterSubstitutor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Pseudo::CharacterSubstitutor* UnityEngine::Localization::Pseudo::CharacterSubstitutor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Pseudo::CharacterSubstitutor*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr  UnityEngine::Localization::Pseudo::CharacterSubstitutor::operator ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod"
constexpr ::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod* UnityEngine::Localization::Pseudo::CharacterSubstitutor::i___UnityEngine__Localization__Pseudo__IPseudoLocalizationMethod() noexcept {
return static_cast<::UnityEngine::Localization::Pseudo::IPseudoLocalizationMethod*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Pseudo::CharacterSubstitutor::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Pseudo::CharacterSubstitutor::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Pseudo::CharacterSubstitutor::CharacterSubstitutor()   {
}
