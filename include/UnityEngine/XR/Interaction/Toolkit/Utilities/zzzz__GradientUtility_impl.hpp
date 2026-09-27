#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/GradientUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_impl.hpp"
#include "UnityEngine/zzzz__GradientColorKey_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__GradientUtility_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GradientAlphaKey_def.hpp"
#include "UnityEngine/zzzz__GradientColorKey_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, float_t, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::Lerp)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb425c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, float_t, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::Lerp)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb425ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.CopyGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::CopyGradient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb42644c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"CopyGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.AddUniqueColorKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GradientColorKey>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddUniqueColorKeys)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb425f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddUniqueColorKeys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.AddUniqueAlphaKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::GradientAlphaKey>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddUniqueAlphaKeys)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb425fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddUniqueAlphaKeys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.AddColorKeyIfUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddColorKeyIfUnique)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb42649c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddColorKeyIfUnique", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.AddAlphaKeyIfUnique
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddAlphaKeyIfUnique)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4265d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddAlphaKeyIfUnique", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.PrepareColorKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientColorKey> (*)(::System::Collections::Generic::List_1<float_t>*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::PrepareColorKeys)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb426120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"PrepareColorKeys", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.PrepareAlphaKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientAlphaKey> (*)(::System::Collections::Generic::List_1<float_t>*, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::PrepareAlphaKeys)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4262d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"PrepareAlphaKeys", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.TruncatePrecision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::TruncatePrecision)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb426714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"TruncatePrecision", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.ReduceKeysIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<float_t>*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::ReduceKeysIfNeeded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb426098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"ReduceKeysIfNeeded", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.GetColorKeyArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientColorKey> (*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::GetColorKeyArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb42673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"GetColorKeyArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility.GetAlphaKeyArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GradientAlphaKey> (*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::GetAlphaKeyArray)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4267ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"GetAlphaKeyArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_ColorKeyTimes(::System::Collections::Generic::List_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<float_t>*, "s_ColorKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::System::Collections::Generic::List_1<float_t>*>(value));
}
inline ::System::Collections::Generic::List_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_ColorKeyTimes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<float_t>*, "s_ColorKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_TruncatedColorKeyTimes(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_TruncatedColorKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_TruncatedColorKeyTimes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_TruncatedColorKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_AlphaKeyTimes(::System::Collections::Generic::List_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<float_t>*, "s_AlphaKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::System::Collections::Generic::List_1<float_t>*>(value));
}
inline ::System::Collections::Generic::List_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_AlphaKeyTimes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<float_t>*, "s_AlphaKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_TruncatedAlphaKeyTimes(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_TruncatedAlphaKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_TruncatedAlphaKeyTimes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "s_TruncatedAlphaKeyTimes", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_ColorKeyArrays(::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>, "s_ColorKeyArrays", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_ColorKeyArrays()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::GradientColorKey>>, "s_ColorKeyArrays", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::setStaticF_s_AlphaKeyArrays(::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>, "s_AlphaKeyArrays", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(std::forward<::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::getStaticF_s_AlphaKeyArrays()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::GradientAlphaKey>>, "s_AlphaKeyArrays", ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>();
}
inline ::UnityEngine::Gradient* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::Lerp(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t, bool  lerpColors, bool  lerpAlphas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(nullptr, ___internal_method, a, b, t, lerpColors, lerpAlphas);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::Lerp(::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, ::UnityEngine::Gradient*  output, float_t  t, bool  lerpColors, bool  lerpAlphas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, output, t, lerpColors, lerpAlphas);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::CopyGradient(::UnityEngine::Gradient*  source, ::UnityEngine::Gradient*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"CopyGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, destination);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddUniqueColorKeys(::ArrayW<::UnityEngine::GradientColorKey>  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddUniqueColorKeys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GradientColorKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddUniqueAlphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey>  keys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddUniqueAlphaKeys", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GradientAlphaKey>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddColorKeyIfUnique(float_t  keyTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddColorKeyIfUnique", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::AddAlphaKeyIfUnique(float_t  keyTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"AddAlphaKeyIfUnique", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyTime);
}
inline ::ArrayW<::UnityEngine::GradientColorKey> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::PrepareColorKeys(::System::Collections::Generic::List_1<float_t>*  keyTimes, ::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"PrepareColorKeys", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientColorKey>>(nullptr, ___internal_method, keyTimes, a, b, t);
}
inline ::ArrayW<::UnityEngine::GradientAlphaKey> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::PrepareAlphaKeys(::System::Collections::Generic::List_1<float_t>*  keyTimes, ::UnityEngine::Gradient*  a, ::UnityEngine::Gradient*  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"PrepareAlphaKeys", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientAlphaKey>>(nullptr, ___internal_method, keyTimes, a, b, t);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::TruncatePrecision(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"TruncatePrecision", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::ReduceKeysIfNeeded(::System::Collections::Generic::List_1<float_t>*  keyTimes, int32_t  maxKeys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"ReduceKeysIfNeeded", {}, {::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyTimes, maxKeys);
}
inline ::ArrayW<::UnityEngine::GradientColorKey> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::GetColorKeyArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"GetColorKeyArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientColorKey>>(nullptr, ___internal_method, size);
}
inline ::ArrayW<::UnityEngine::GradientAlphaKey> UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::GetAlphaKeyArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {"GetAlphaKeyArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GradientAlphaKey>>(nullptr, ___internal_method, size);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility* UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::GradientUtility::GradientUtility()   {
}
