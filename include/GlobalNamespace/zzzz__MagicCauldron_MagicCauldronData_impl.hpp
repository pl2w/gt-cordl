#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_MagicCauldronData.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_impl.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_MagicCauldronData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.get_CurrentStateElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)()>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentStateElapsedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentStateElapsedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.set_CurrentStateElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)(float_t)>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentStateElapsedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentStateElapsedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.get_CurrentRecipeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)()>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentRecipeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentRecipeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.set_CurrentRecipeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)(int32_t)>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentRecipeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentRecipeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MagicCauldron_CauldronState (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)()>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)(::GlobalNamespace::MagicCauldron_CauldronState)>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.get_IngredientIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)()>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::get_IngredientIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_IngredientIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData.set_IngredientIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)(int32_t)>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::set_IngredientIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5959ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_IngredientIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MagicCauldron_MagicCauldronData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MagicCauldron_MagicCauldronData::*)(float_t, int32_t, ::GlobalNamespace::MagicCauldron_CauldronState, int32_t)>(&::GlobalNamespace::MagicCauldron_MagicCauldronData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59593d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentStateElapsedTime_k__BackingField()  {
return this->____CurrentStateElapsedTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentStateElapsedTime_k__BackingField() const {
return this->____CurrentStateElapsedTime_k__BackingField;
}
constexpr void GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_set__CurrentStateElapsedTime_k__BackingField(float_t  value)  {
this->____CurrentStateElapsedTime_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentRecipeIndex_k__BackingField()  {
return this->____CurrentRecipeIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentRecipeIndex_k__BackingField() const {
return this->____CurrentRecipeIndex_k__BackingField;
}
constexpr void GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_set__CurrentRecipeIndex_k__BackingField(int32_t  value)  {
this->____CurrentRecipeIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::MagicCauldron_CauldronState& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentState_k__BackingField()  {
return this->____CurrentState_k__BackingField;
}
constexpr ::GlobalNamespace::MagicCauldron_CauldronState const& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__CurrentState_k__BackingField() const {
return this->____CurrentState_k__BackingField;
}
constexpr void GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_set__CurrentState_k__BackingField(::GlobalNamespace::MagicCauldron_CauldronState  value)  {
this->____CurrentState_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__IngredientIndex_k__BackingField()  {
return this->____IngredientIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_get__IngredientIndex_k__BackingField() const {
return this->____IngredientIndex_k__BackingField;
}
constexpr void GlobalNamespace::MagicCauldron_MagicCauldronData::__cordl_internal_set__IngredientIndex_k__BackingField(int32_t  value)  {
this->____IngredientIndex_k__BackingField = value;
}
inline float_t GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentStateElapsedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentStateElapsedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentStateElapsedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentStateElapsedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentRecipeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentRecipeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentRecipeIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentRecipeIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::MagicCauldron_CauldronState GlobalNamespace::MagicCauldron_MagicCauldronData::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MagicCauldron_CauldronState>(*this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron_MagicCauldronData::set_CurrentState(::GlobalNamespace::MagicCauldron_CauldronState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MagicCauldron_MagicCauldronData::get_IngredientIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"get_IngredientIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::MagicCauldron_MagicCauldronData::set_IngredientIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {"set_IngredientIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::MagicCauldron_MagicCauldronData::_ctor(float_t  stateElapsedTime, int32_t  recipeIndex, ::GlobalNamespace::MagicCauldron_CauldronState  state, int32_t  ingredientIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MagicCauldron_MagicCauldronData>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MagicCauldron_CauldronState>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateElapsedTime, recipeIndex, state, ingredientIndex);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::MagicCauldron_MagicCauldronData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::MagicCauldron_MagicCauldronData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_CurrentStateElapsedTime_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentRecipeIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CurrentState_k__BackingField", ty: "::GlobalNamespace::MagicCauldron_CauldronState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IngredientIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData::MagicCauldron_MagicCauldronData(float_t  _CurrentStateElapsedTime_k__BackingField, int32_t  _CurrentRecipeIndex_k__BackingField, ::GlobalNamespace::MagicCauldron_CauldronState  _CurrentState_k__BackingField, int32_t  _IngredientIndex_k__BackingField) noexcept  {
this->_CurrentStateElapsedTime_k__BackingField = _CurrentStateElapsedTime_k__BackingField;
this->_CurrentRecipeIndex_k__BackingField = _CurrentRecipeIndex_k__BackingField;
this->_CurrentState_k__BackingField = _CurrentState_k__BackingField;
this->_IngredientIndex_k__BackingField = _IngredientIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron_MagicCauldronData::MagicCauldron_MagicCauldronData()   {
}
