#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNodeDrawInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNodeDrawInfo_def.hpp"
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxBuffer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNodeDrawInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BVHNodeDrawInfo::*)(::Fusion::LagCompensation::HitboxBuffer*)>(&::Fusion::LagCompensation::BVHNodeDrawInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6017698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNodeDrawInfo.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Fusion::LagCompensation::BVHNodeDrawInfo::*)()>(&::Fusion::LagCompensation::BVHNodeDrawInfo::get_Bounds)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60176c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNodeDrawInfo.get_Depth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::BVHNodeDrawInfo::*)()>(&::Fusion::LagCompensation::BVHNodeDrawInfo::get_Depth)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60177d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_Depth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNodeDrawInfo.get_MaxDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::BVHNodeDrawInfo::*)()>(&::Fusion::LagCompensation::BVHNodeDrawInfo::get_MaxDepth)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6017820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_MaxDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BVHNodeDrawInfo.FromBVHNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::BVHNodeDrawInfo* (::Fusion::LagCompensation::BVHNodeDrawInfo::*)(::by_ref<::Fusion::LagCompensation::BVHNode>)>(&::Fusion::LagCompensation::BVHNodeDrawInfo::FromBVHNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6017844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"FromBVHNode", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LagCompensation::HitboxBuffer*& Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_get_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr ::Fusion::LagCompensation::HitboxBuffer* const& Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_get_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr void Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_set_Buffer(::Fusion::LagCompensation::HitboxBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Buffer = value;
}
constexpr int32_t& Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_get_NodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeIndex;
}
constexpr int32_t const& Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_get_NodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NodeIndex;
}
constexpr void Fusion::LagCompensation::BVHNodeDrawInfo::__cordl_internal_set_NodeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NodeIndex = value;
}
inline void Fusion::LagCompensation::BVHNodeDrawInfo::_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::HitboxBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::UnityEngine::Bounds Fusion::LagCompensation::BVHNodeDrawInfo::get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline int32_t Fusion::LagCompensation::BVHNodeDrawInfo::get_Depth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_Depth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::LagCompensation::BVHNodeDrawInfo::get_MaxDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"get_MaxDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::BVHNodeDrawInfo* Fusion::LagCompensation::BVHNodeDrawInfo::FromBVHNode(::by_ref<::Fusion::LagCompensation::BVHNode>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BVHNodeDrawInfo*>(),
                        {"FromBVHNode", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BVHNode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::BVHNodeDrawInfo*>(this, ___internal_method, node);
}
inline ::Fusion::LagCompensation::BVHNodeDrawInfo* Fusion::LagCompensation::BVHNodeDrawInfo::New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BVHNodeDrawInfo*>(buffer));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BVHNodeDrawInfo::BVHNodeDrawInfo()   {
}
