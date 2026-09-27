#pragma once
// IWYU pragma private; include "Oculus/Interaction/AssertUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__AssertUtils_def.hpp"
#include "Oculus/Interaction/zzzz__AssertUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__MatchEvaluator_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils.AssertIsTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, bool, ::StringW, ::StringW, ::StringW)>(&::Oculus::Interaction::AssertUtils::AssertIsTrue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa48a41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"AssertIsTrue", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils.WarnInspectorCollectionItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Oculus::Interaction::AssertUtils::WarnInspectorCollectionItems)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0xa48a454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"WarnInspectorCollectionItems", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::StringW, ::StringW, ::StringW)>(&::Oculus::Interaction::AssertUtils::LogWarning)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa48ac38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"LogWarning", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils.Nicify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Oculus::Interaction::AssertUtils::Nicify)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa48aa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"Nicify", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::AssertUtils::AssertIsTrue(::UnityEngine::Component*  component, bool  value, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"AssertIsTrue", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, value, whyItFailed, whereItFailed, howToFix);
}
template<typename TValue>
requires(::cordl_internals::reference_type_constraint<TValue>)
inline void Oculus::Interaction::AssertUtils::AssertAspect(::UnityEngine::Component*  component, TValue  aspect, ::StringW  aspectLocation, ::StringW  whyItFailed, ::StringW  whereFailed, ::StringW  howToFix)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                    {"AssertAspect", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, aspect, aspectLocation, whyItFailed, whereFailed, howToFix);
}
template<typename TValue>
requires(::cordl_internals::reference_type_constraint<TValue>)
inline void Oculus::Interaction::AssertUtils::AssertField(::UnityEngine::Component*  component, TValue  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                    {"AssertField", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<TValue>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, value, variableName, whyItFailed, whereItFailed, howToFix);
}
template<typename TValue>
inline void Oculus::Interaction::AssertUtils::AssertCollectionField(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<TValue>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereFailed, ::StringW  howToFix)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                    {"AssertCollectionField", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, value, variableName, whyItFailed, whereFailed, howToFix);
}
template<typename TValue>
inline void Oculus::Interaction::AssertUtils::AssertCollectionItems(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<TValue>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                    {"AssertCollectionItems", {::i2c::class_of<TValue>()}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, value, variableName, whyItFailed, whereItFailed, howToFix);
}
inline void Oculus::Interaction::AssertUtils::WarnInspectorCollectionItems(::UnityEngine::Component*  component, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*  value, ::StringW  variableName, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"WarnInspectorCollectionItems", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, value, variableName, whyItFailed, whereItFailed, howToFix);
}
inline void Oculus::Interaction::AssertUtils::LogWarning(::UnityEngine::Component*  component, ::StringW  whyItFailed, ::StringW  whereItFailed, ::StringW  howToFix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"LogWarning", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, whyItFailed, whereItFailed, howToFix);
}
inline ::StringW Oculus::Interaction::AssertUtils::Nicify(::StringW  variableName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils*>(),
                        {"Nicify", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, variableName);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AssertUtils::AssertUtils()   {
}
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AssertUtils___c::*)()>(&::Oculus::Interaction::AssertUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48aeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AssertUtils___c._Nicify_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::AssertUtils___c::*)(::System::Text::RegularExpressions::Match*)>(&::Oculus::Interaction::AssertUtils___c::_Nicify_b__8_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa48aec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils___c*>(),
                        {"<Nicify>b__8_0", {}, {::i2c::type_of<::System::Text::RegularExpressions::Match*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::AssertUtils___c::setStaticF___9(::Oculus::Interaction::AssertUtils___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::AssertUtils___c*, "<>9", ::Oculus::Interaction::AssertUtils___c*>(std::forward<::Oculus::Interaction::AssertUtils___c*>(value));
}
inline ::Oculus::Interaction::AssertUtils___c* Oculus::Interaction::AssertUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::AssertUtils___c*, "<>9", ::Oculus::Interaction::AssertUtils___c*>();
}
inline void Oculus::Interaction::AssertUtils___c::setStaticF___9__8_0(::System::Text::RegularExpressions::MatchEvaluator*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::MatchEvaluator*, "<>9__8_0", ::Oculus::Interaction::AssertUtils___c*>(std::forward<::System::Text::RegularExpressions::MatchEvaluator*>(value));
}
inline ::System::Text::RegularExpressions::MatchEvaluator* Oculus::Interaction::AssertUtils___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::MatchEvaluator*, "<>9__8_0", ::Oculus::Interaction::AssertUtils___c*>();
}
inline void Oculus::Interaction::AssertUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::AssertUtils___c::_Nicify_b__8_0(::System::Text::RegularExpressions::Match*  match)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AssertUtils___c*>(),
                        {"<Nicify>b__8_0", {}, {::i2c::type_of<::System::Text::RegularExpressions::Match*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, match);
}
inline ::Oculus::Interaction::AssertUtils___c* Oculus::Interaction::AssertUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AssertUtils___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AssertUtils___c::AssertUtils___c()   {
}
