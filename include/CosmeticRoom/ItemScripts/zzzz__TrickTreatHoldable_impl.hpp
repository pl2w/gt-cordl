#pragma once
// IWYU pragma private; include "CosmeticRoom/ItemScripts/TrickTreatHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "CosmeticRoom/ItemScripts/zzzz__TrickTreatHoldable_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::ItemScripts::TrickTreatHoldable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemScripts::TrickTreatHoldable::*)()>(&::CosmeticRoom::ItemScripts::TrickTreatHoldable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c4eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>(),
                    {::i2c::class_of<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::ItemScripts::TrickTreatHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::ItemScripts::TrickTreatHoldable::*)()>(&::CosmeticRoom::ItemScripts::TrickTreatHoldable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c4ebe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshCollider>& CosmeticRoom::ItemScripts::TrickTreatHoldable::__cordl_internal_get_candyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candyCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& CosmeticRoom::ItemScripts::TrickTreatHoldable::__cordl_internal_get_candyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candyCollider;
}
constexpr void CosmeticRoom::ItemScripts::TrickTreatHoldable::__cordl_internal_set_candyCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candyCollider = value;
}
inline void CosmeticRoom::ItemScripts::TrickTreatHoldable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::ItemScripts::TrickTreatHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::ItemScripts::TrickTreatHoldable* CosmeticRoom::ItemScripts::TrickTreatHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::ItemScripts::TrickTreatHoldable*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::ItemScripts::TrickTreatHoldable::TrickTreatHoldable()   {
}
