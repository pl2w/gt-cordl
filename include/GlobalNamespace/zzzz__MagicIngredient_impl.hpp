#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicIngredient.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MagicIngredient_def.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MagicIngredient.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicIngredient::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::MagicIngredient::OnSpawn)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x595a110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                    {::i2c::class_of<::GlobalNamespace::MagicIngredient*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicIngredient.ReParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicIngredient::*)()>(&::GlobalNamespace::MagicIngredient::ReParent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x595a164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {"ReParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicIngredient.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicIngredient::*)()>(&::GlobalNamespace::MagicIngredient::Disable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x595a1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicIngredient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicIngredient::*)()>(&::GlobalNamespace::MagicIngredient::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x595a284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MagicIngredientType>& GlobalNamespace::MagicIngredient::__cordl_internal_get_IngredientTypeSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IngredientTypeSO;
}
constexpr ::UnityW<::GlobalNamespace::MagicIngredientType> const& GlobalNamespace::MagicIngredient::__cordl_internal_get_IngredientTypeSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IngredientTypeSO;
}
constexpr void GlobalNamespace::MagicIngredient::__cordl_internal_set_IngredientTypeSO(::UnityW<::GlobalNamespace::MagicIngredientType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IngredientTypeSO = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MagicIngredient::__cordl_internal_get_rootParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MagicIngredient::__cordl_internal_get_rootParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rootParent;
}
constexpr void GlobalNamespace::MagicIngredient::__cordl_internal_set_rootParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rootParent = value;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& GlobalNamespace::MagicIngredient::__cordl_internal_get_item()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& GlobalNamespace::MagicIngredient::__cordl_internal_get_item() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___item;
}
constexpr void GlobalNamespace::MagicIngredient::__cordl_internal_set_item(::UnityW<::GlobalNamespace::WorldShareableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___item = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MagicIngredient::__cordl_internal_get_grabPtInitParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MagicIngredient::__cordl_internal_get_grabPtInitParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPtInitParent;
}
constexpr void GlobalNamespace::MagicIngredient::__cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPtInitParent = value;
}
inline void GlobalNamespace::MagicIngredient::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MagicIngredient*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::MagicIngredient::ReParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {"ReParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicIngredient::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MagicIngredient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicIngredient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MagicIngredient* GlobalNamespace::MagicIngredient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MagicIngredient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicIngredient::MagicIngredient()   {
}
