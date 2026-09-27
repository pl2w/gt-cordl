#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterialProperties.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_BuiltinPreset_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_BuiltinPreset_def.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::MaterialData* (::GlobalNamespace::MetaXRAcousticMaterialProperties::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.get_Preset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset (::GlobalNamespace::MetaXRAcousticMaterialProperties::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::get_Preset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea97b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"get_Preset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.set_Preset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterialProperties::*)(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::set_Preset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ea97c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"set_Preset", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.SetPreset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset, ::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::SetPreset)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9ea8ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"SetPreset", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.AcousticTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::AcousticTile)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9ea97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"AcousticTile", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Brick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Brick)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9ea9ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Brick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.BrickPainted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::BrickPainted)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9ea9da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"BrickPainted", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Cardboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Cardboard)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x9eaa078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Cardboard", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Carpet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Carpet)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x9eaa3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Carpet", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.CarpetHeavy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::CarpetHeavy)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9eaa6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CarpetHeavy", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.CarpetHeavyPadded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::CarpetHeavyPadded)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9eaa988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CarpetHeavyPadded", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.CeramicTile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::CeramicTile)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9eaac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CeramicTile", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Concrete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Concrete)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9eaaf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Concrete", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.ConcreteRough
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteRough)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9eab214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteRough", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.ConcreteBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteBlock)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9eab4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteBlock", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.ConcreteBlockPainted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteBlockPainted)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9eab7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteBlockPainted", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Curtain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Curtain)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9eabab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Curtain", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Foliage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Foliage)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9eabd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Foliage", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Glass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Glass)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9eac068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Glass", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.GlassHeavy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::GlassHeavy)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9eac32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"GlassHeavy", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Grass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Grass)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9eac5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Grass", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Gravel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Gravel)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9eac830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Gravel", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.GypsumBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::GypsumBoard)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x9eaca5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"GypsumBoard", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Marble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Marble)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x9eacd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Marble", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Mud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Mud)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9ead00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Mud", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.PlasterOnBrick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::PlasterOnBrick)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9ead238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"PlasterOnBrick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.PlasterOnConcreteBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::PlasterOnConcreteBlock)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9ead518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"PlasterOnConcreteBlock", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Rubber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Rubber)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9ead7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Rubber", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Soil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Soil)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9eadabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Soil", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.SoundProof
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::SoundProof)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9eadcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"SoundProof", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Snow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Snow)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9eade04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Snow", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Steel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Steel)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9eae02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Steel", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Stone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Stone)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9eae2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Stone", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Vent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Vent)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x9eae598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Vent", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Water
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Water)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9eae910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Water", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.WoodThin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::WoodThin)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x9eaebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodThin", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.WoodThick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::WoodThick)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x9eaeeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodThick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.WoodFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::WoodFloor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9eaf184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodFloor", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.WoodOnConcrete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::WoodOnConcrete)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x9eaf460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodOnConcrete", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.MetaDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Meta::XR::Acoustics::MaterialData*>)>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::MetaDefault)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9eaf738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"MetaDefault", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterialProperties::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9eaf868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterialProperties.Meta_XR_Acoustics_IMaterialDataProvider_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticMaterialProperties::*)()>(&::GlobalNamespace::MetaXRAcousticMaterialProperties::Meta_XR_Acoustics_IMaterialDataProvider_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eaf8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Meta.XR.Acoustics.IMaterialDataProvider.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::Acoustics::MaterialData*& GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::Meta::XR::Acoustics::MaterialData* const& GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_set_data(::Meta::XR::Acoustics::MaterialData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset& GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const& GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterialProperties::__cordl_internal_set_preset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
inline ::Meta::XR::Acoustics::MaterialData* GlobalNamespace::MetaXRAcousticMaterialProperties::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::MaterialData*>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset GlobalNamespace::MetaXRAcousticMaterialProperties::get_Preset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"get_Preset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::set_Preset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"set_Preset", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::SetPreset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  builtinPreset, ::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"SetPreset", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builtinPreset, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::AcousticTile(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"AcousticTile", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Brick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Brick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::BrickPainted(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"BrickPainted", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Cardboard(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Cardboard", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Carpet(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Carpet", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::CarpetHeavy(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CarpetHeavy", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::CarpetHeavyPadded(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CarpetHeavyPadded", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::CeramicTile(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"CeramicTile", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Concrete(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Concrete", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteRough(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteRough", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteBlock(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteBlock", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::ConcreteBlockPainted(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"ConcreteBlockPainted", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Curtain(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Curtain", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Foliage(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Foliage", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Glass(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Glass", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::GlassHeavy(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"GlassHeavy", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Grass(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Grass", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Gravel(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Gravel", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::GypsumBoard(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"GypsumBoard", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Marble(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Marble", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Mud(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Mud", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::PlasterOnBrick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"PlasterOnBrick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::PlasterOnConcreteBlock(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"PlasterOnConcreteBlock", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Rubber(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Rubber", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Soil(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Soil", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::SoundProof(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"SoundProof", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Snow(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Snow", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Steel(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Steel", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Stone(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Stone", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Vent(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Vent", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::Water(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Water", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::WoodThin(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodThin", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::WoodThick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodThick", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::WoodFloor(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodFloor", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::WoodOnConcrete(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"WoodOnConcrete", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::MetaDefault(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"MetaDefault", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MaterialData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterialProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticMaterialProperties::Meta_XR_Acoustics_IMaterialDataProvider_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>(),
                        {"Meta.XR.Acoustics.IMaterialDataProvider.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMaterialProperties* GlobalNamespace::MetaXRAcousticMaterialProperties::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterialProperties*>());
}
/// @brief Convert operator to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr  GlobalNamespace::MetaXRAcousticMaterialProperties::operator ::Meta::XR::Acoustics::IMaterialDataProvider*() noexcept {
return static_cast<::Meta::XR::Acoustics::IMaterialDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr ::Meta::XR::Acoustics::IMaterialDataProvider* GlobalNamespace::MetaXRAcousticMaterialProperties::i___Meta__XR__Acoustics__IMaterialDataProvider() noexcept {
return static_cast<::Meta::XR::Acoustics::IMaterialDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterialProperties::MetaXRAcousticMaterialProperties()   {
}
