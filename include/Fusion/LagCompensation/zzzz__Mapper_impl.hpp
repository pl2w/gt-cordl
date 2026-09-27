#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/Mapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__Mapper_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::Mapper::*)()>(&::Fusion::LagCompensation::Mapper::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x60113e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper.TryGetLeafIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::Mapper::*)(::Fusion::HitboxRoot*, ::by_ref<int32_t>)>(&::Fusion::LagCompensation::Mapper::TryGetLeafIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6011438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"TryGetLeafIndex", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper.GetLeafIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::LagCompensation::Mapper::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::Mapper::GetLeafIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60114a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"GetLeafIndex", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper.RegisterMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::Mapper::*)(::Fusion::HitboxRoot*, int32_t)>(&::Fusion::LagCompensation::Mapper::RegisterMapping)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x601152c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"RegisterMapping", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper.DeRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::Mapper::*)(::Fusion::HitboxRoot*)>(&::Fusion::LagCompensation::Mapper::DeRegister)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6011594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"DeRegister", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Mapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::Mapper::*)()>(&::Fusion::LagCompensation::Mapper::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60115ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*& Fusion::LagCompensation::Mapper::__cordl_internal_get__rootToNodeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootToNodeIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>* const& Fusion::LagCompensation::Mapper::__cordl_internal_get__rootToNodeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootToNodeIndex;
}
constexpr void Fusion::LagCompensation::Mapper::__cordl_internal_set__rootToNodeIndex(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::HitboxRoot>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootToNodeIndex = value;
}
inline int32_t Fusion::LagCompensation::Mapper::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::LagCompensation::Mapper::TryGetLeafIndex(::Fusion::HitboxRoot*  root, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"TryGetLeafIndex", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, root, index);
}
inline int32_t Fusion::LagCompensation::Mapper::GetLeafIndex(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"GetLeafIndex", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, root);
}
inline void Fusion::LagCompensation::Mapper::RegisterMapping(::Fusion::HitboxRoot*  root, int32_t  leafIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"RegisterMapping", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, leafIndex);
}
inline void Fusion::LagCompensation::Mapper::DeRegister(::Fusion::HitboxRoot*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {"DeRegister", {}, {::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Fusion::LagCompensation::Mapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Mapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::Mapper* Fusion::LagCompensation::Mapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::Mapper*>());
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::Mapper::Mapper()   {
}
