#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimatorJobExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorJobExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Animations/zzzz__CustomStreamPropertyType_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertySceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::TransformStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb54dc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb54dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindCustomStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::StringW, ::UnityEngine::Animations::CustomStreamPropertyType)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindCustomStreamProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb54ddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindCustomStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb54dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindSceneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::TransformSceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb54e2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindSceneProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertySceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb54e408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.BindSceneProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::PropertySceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool)>(&::UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb54e424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb54dc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb54dffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindCustomStreamProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::StringW, ::UnityEngine::Animations::CustomStreamPropertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb54dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindCustomStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb54e2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb54e43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertySceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamTransform_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb54e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindStreamProperty_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Type*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb54e758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindCustomStreamProperty_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::UnityEngine::Animations::CustomStreamPropertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb54e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindCustomStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneTransform_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb54e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::AnimatorJobExtensions.InternalBindSceneProperty_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::Type*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>)>(&::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb54e87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertySceneHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::TransformStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::TransformStreamHandle>(nullptr, ___internal_method, animator, transform);
}
inline ::UnityEngine::Animations::PropertyStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertyStreamHandle>(nullptr, ___internal_method, animator, transform, type, property);
}
inline ::UnityEngine::Animations::PropertyStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindCustomStreamProperty(::UnityEngine::Animator*  animator, ::StringW  property, ::UnityEngine::Animations::CustomStreamPropertyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindCustomStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertyStreamHandle>(nullptr, ___internal_method, animator, property, type);
}
inline ::UnityEngine::Animations::PropertyStreamHandle UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, /* [DefaultValue("false")] */ bool  isObjectReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertyStreamHandle>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference);
}
inline ::UnityEngine::Animations::TransformSceneHandle UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::TransformSceneHandle>(nullptr, ___internal_method, animator, transform);
}
inline ::UnityEngine::Animations::PropertySceneHandle UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertySceneHandle>(nullptr, ___internal_method, animator, transform, type, property);
}
inline ::UnityEngine::Animations::PropertySceneHandle UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  property, /* [DefaultValue("false")] */ bool  isObjectReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"BindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::PropertySceneHandle>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, /* [NotNull] */ ::System::Type*  type, /* [NotNull] */ ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::StringW  property, ::UnityEngine::Animations::CustomStreamPropertyType  propertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindCustomStreamProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, property, propertyType, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformSceneHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty(/* [NotNull] */ ::UnityEngine::Animator*  animator, /* [NotNull] */ ::UnityEngine::Transform*  transform, /* [NotNull] */ ::System::Type*  type, /* [NotNull] */ ::StringW  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>  propertySceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertySceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertySceneHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformStreamHandle>  transformStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty_Injected(::System::IntPtr  animator, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, ::UnityEngine::Animations::CustomStreamPropertyType  propertyType, ::by_ref<::UnityEngine::Animations::PropertyStreamHandle>  propertyStreamHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindCustomStreamProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::Animations::CustomStreamPropertyType>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertyStreamHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, property, propertyType, propertyStreamHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::by_ref<::UnityEngine::Animations::TransformSceneHandle>  transformSceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneTransform_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::TransformSceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, transformSceneHandle);
}
inline void UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty_Injected(::System::IntPtr  animator, ::System::IntPtr  transform, ::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  property, bool  isObjectReference, ::by_ref<::UnityEngine::Animations::PropertySceneHandle>  propertySceneHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::AnimatorJobExtensions*>(),
                        {"InternalBindSceneProperty_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Animations::PropertySceneHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, transform, type, property, isObjectReference, propertySceneHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::AnimatorJobExtensions::AnimatorJobExtensions()   {
}
