#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBucket.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPaintBucket_def.hpp"
#include "GlobalNamespace/zzzz__BuilderMaterialOptions_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBucket.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBucket::*)()>(&::GlobalNamespace::BuilderPaintBucket::Awake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x57b32d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBucket.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBucket::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderPaintBucket::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57b3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPaintBucket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPaintBucket::*)()>(&::GlobalNamespace::BuilderPaintBucket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57b34f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_bucketMaterialOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bucketMaterialOptions;
}
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_bucketMaterialOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bucketMaterialOptions;
}
constexpr void GlobalNamespace::BuilderPaintBucket::__cordl_internal_set_bucketMaterialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bucketMaterialOptions = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_paintBucketRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintBucketRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_paintBucketRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintBucketRenderer;
}
constexpr void GlobalNamespace::BuilderPaintBucket::__cordl_internal_set_paintBucketRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintBucketRenderer = value;
}
constexpr ::StringW& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_materialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr ::StringW const& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_materialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr void GlobalNamespace::BuilderPaintBucket::__cordl_internal_set_materialId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialId = value;
}
constexpr int32_t& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr int32_t const& GlobalNamespace::BuilderPaintBucket::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::BuilderPaintBucket::__cordl_internal_set_materialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
inline void GlobalNamespace::BuilderPaintBucket::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPaintBucket::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BuilderPaintBucket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPaintBucket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPaintBucket* GlobalNamespace::BuilderPaintBucket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPaintBucket*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPaintBucket::BuilderPaintBucket()   {
}
