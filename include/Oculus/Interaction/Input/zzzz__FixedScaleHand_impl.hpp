#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FixedScaleHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__FixedScaleHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::FixedScaleHand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FixedScaleHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::FixedScaleHand::Apply)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa507edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FixedScaleHand.InjectAllFixedScaleDataModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FixedScaleHand::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*, bool, float_t)>(&::Oculus::Interaction::Input::FixedScaleHand::InjectAllFixedScaleDataModifier)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa507f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {"InjectAllFixedScaleDataModifier", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FixedScaleHand.InjectScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FixedScaleHand::*)(float_t)>(&::Oculus::Interaction::Input::FixedScaleHand::InjectScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {"InjectScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::FixedScaleHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::FixedScaleHand::*)()>(&::Oculus::Interaction::Input::FixedScaleHand::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa508024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Input::FixedScaleHand::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr float_t const& Oculus::Interaction::Input::FixedScaleHand::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void Oculus::Interaction::Input::FixedScaleHand::__cordl_internal_set__scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scale = value;
}
inline void Oculus::Interaction::Input::FixedScaleHand::Apply(::Oculus::Interaction::Input::HandDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::FixedScaleHand::InjectAllFixedScaleDataModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {"InjectAllFixedScaleDataModifier", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier, scale);
}
inline void Oculus::Interaction::Input::FixedScaleHand::InjectScale(float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {"InjectScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline void Oculus::Interaction::Input::FixedScaleHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::FixedScaleHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::FixedScaleHand* Oculus::Interaction::Input::FixedScaleHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::FixedScaleHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::FixedScaleHand::FixedScaleHand()   {
}
