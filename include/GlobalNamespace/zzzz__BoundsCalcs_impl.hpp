#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsCalcs.hpp"
#include "GlobalNamespace/zzzz__BoundsInfo_impl.hpp"
#include "GlobalNamespace/zzzz__StateHash_impl.hpp"
#include "UnityEngine/zzzz__MeshFilter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BoundsCalcs_def.hpp"
#include "GlobalNamespace/zzzz__BoundsInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoundsCalcs.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsCalcs::*)()>(&::GlobalNamespace::BoundsCalcs::Compute)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5b4133c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsCalcs*>(),
                        {"Compute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsCalcs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsCalcs::*)()>(&::GlobalNamespace::BoundsCalcs::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b41ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsCalcs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>>& GlobalNamespace::BoundsCalcs::__cordl_internal_get_optionalTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalTargets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> const& GlobalNamespace::BoundsCalcs::__cordl_internal_get_optionalTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optionalTargets;
}
constexpr void GlobalNamespace::BoundsCalcs::__cordl_internal_set_optionalTargets(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optionalTargets = value;
}
constexpr bool& GlobalNamespace::BoundsCalcs::__cordl_internal_get_useRootMeshOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRootMeshOnly;
}
constexpr bool const& GlobalNamespace::BoundsCalcs::__cordl_internal_get_useRootMeshOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRootMeshOnly;
}
constexpr void GlobalNamespace::BoundsCalcs::__cordl_internal_set_useRootMeshOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRootMeshOnly = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*& GlobalNamespace::BoundsCalcs::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>* const& GlobalNamespace::BoundsCalcs::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void GlobalNamespace::BoundsCalcs::__cordl_internal_set_elements(::System::Collections::Generic::List_1<::GlobalNamespace::BoundsInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::GlobalNamespace::BoundsInfo& GlobalNamespace::BoundsCalcs::__cordl_internal_get_composite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___composite;
}
constexpr ::GlobalNamespace::BoundsInfo const& GlobalNamespace::BoundsCalcs::__cordl_internal_get_composite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___composite;
}
constexpr void GlobalNamespace::BoundsCalcs::__cordl_internal_set_composite(::GlobalNamespace::BoundsInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___composite = value;
}
constexpr ::GlobalNamespace::StateHash& GlobalNamespace::BoundsCalcs::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::StateHash const& GlobalNamespace::BoundsCalcs::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::BoundsCalcs::__cordl_internal_set__state(::GlobalNamespace::StateHash  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void GlobalNamespace::BoundsCalcs::setStaticF_singleMesh(::ArrayW<::UnityW<::UnityEngine::MeshFilter>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::MeshFilter>>, "singleMesh", ::GlobalNamespace::BoundsCalcs*>(std::forward<::ArrayW<::UnityW<::UnityEngine::MeshFilter>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::MeshFilter>> GlobalNamespace::BoundsCalcs::getStaticF_singleMesh()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::MeshFilter>>, "singleMesh", ::GlobalNamespace::BoundsCalcs*>();
}
inline void GlobalNamespace::BoundsCalcs::Compute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsCalcs*>(),
                        {"Compute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BoundsCalcs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsCalcs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BoundsCalcs* GlobalNamespace::BoundsCalcs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BoundsCalcs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoundsCalcs::BoundsCalcs()   {
}
