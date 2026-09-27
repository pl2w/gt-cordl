#pragma once
// IWYU pragma private; include "CjLib/PrimitiveMeshFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CjLib/zzzz__PrimitiveMeshFactory_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.GetPooledLineMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::GetPooledLineMesh)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5df5034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"GetPooledLineMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::CjLib::PrimitiveMeshFactory::Line)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de33b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.Lines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::ArrayW<::UnityEngine::Vector3>)>(&::CjLib::PrimitiveMeshFactory::Lines)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5de37d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Lines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.LineStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::ArrayW<::UnityEngine::Vector3>)>(&::CjLib::PrimitiveMeshFactory::LineStrip)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5de3bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"LineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.BoxWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::BoxWireframe)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5de4644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxWireframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.BoxSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::BoxSolidColor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5de48b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxSolidColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.BoxFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::BoxFlatShaded)> {
  constexpr static std::size_t size = 0xd64;
  constexpr static std::size_t addrs = 0x5de4b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxFlatShaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.RectWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::RectWireframe)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5de5b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectWireframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.RectSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::RectSolidColor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5de5dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectSolidColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.RectFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::CjLib::PrimitiveMeshFactory::RectFlatShaded)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5de5fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectFlatShaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CircleWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CircleWireframe)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x5de67ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CircleSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CircleSolidColor)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5de6c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CircleFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CircleFlatShaded)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x5de7124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CylinderWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CylinderWireframe)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x5de7c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CylinderSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CylinderSolidColor)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x5de81c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CylinderFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CylinderFlatShaded)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x5de87d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CylinderSmoothShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::CylinderSmoothShaded)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x5de9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderSmoothShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.SphereWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t)>(&::CjLib::PrimitiveMeshFactory::SphereWireframe)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x5de9da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereWireframe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.SphereSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t)>(&::CjLib::PrimitiveMeshFactory::SphereSolidColor)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0x5dea440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereSolidColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.SphereFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t)>(&::CjLib::PrimitiveMeshFactory::SphereFlatShaded)> {
  constexpr static std::size_t size = 0xed0;
  constexpr static std::size_t addrs = 0x5deab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereFlatShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.SphereSmoothShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t)>(&::CjLib::PrimitiveMeshFactory::SphereSmoothShaded)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x5deba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereSmoothShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CapsuleWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t, bool, bool, bool)>(&::CjLib::PrimitiveMeshFactory::CapsuleWireframe)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x5decab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleWireframe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CapsuleSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t, bool, bool, bool)>(&::CjLib::PrimitiveMeshFactory::CapsuleSolidColor)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x5ded2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleSolidColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CapsuleFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t, bool, bool, bool)>(&::CjLib::PrimitiveMeshFactory::CapsuleFlatShaded)> {
  constexpr static std::size_t size = 0x11bc;
  constexpr static std::size_t addrs = 0x5dedc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleFlatShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.CapsuleSmoothShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t, int32_t, bool, bool, bool)>(&::CjLib::PrimitiveMeshFactory::CapsuleSmoothShaded)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x5deee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleSmoothShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.Capsule2DWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::Capsule2DWireframe)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5df0058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.Capsule2DSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::Capsule2DSolidColor)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5df0508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.Capsule2DFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::Capsule2DFlatShaded)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x5df0a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.ConeWireframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::ConeWireframe)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x5df1344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.ConeSolidColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::ConeSolidColor)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5df17ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.ConeFlatShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::ConeFlatShaded)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x5df1cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory.ConeSmoothShaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(int32_t)>(&::CjLib::PrimitiveMeshFactory::ConeSmoothShaded)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x5df242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeSmoothShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::PrimitiveMeshFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::PrimitiveMeshFactory::*)()>(&::CjLib::PrimitiveMeshFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df5488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_lastDrawLineFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_lastDrawLineFrame", ::CjLib::PrimitiveMeshFactory*>(std::forward<int32_t>(value));
}
inline int32_t CjLib::PrimitiveMeshFactory::getStaticF_s_lastDrawLineFrame()  {
return ::cordl_internals::getStaticField<int32_t, "s_lastDrawLineFrame", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_iPooledMesh(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_iPooledMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<int32_t>(value));
}
inline int32_t CjLib::PrimitiveMeshFactory::getStaticF_s_iPooledMesh()  {
return ::cordl_internals::getStaticField<int32_t, "s_iPooledMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_lineMeshPool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, "s_lineMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_lineMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, "s_lineMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_boxWireframeMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxWireframeMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_boxWireframeMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxWireframeMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_boxSolidColorMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxSolidColorMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_boxSolidColorMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxSolidColorMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_boxFlatShadedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxFlatShadedMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_boxFlatShadedMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_boxFlatShadedMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_rectWireframeMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectWireframeMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_rectWireframeMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectWireframeMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_rectSolidColorMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectSolidColorMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_rectSolidColorMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectSolidColorMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_rectFlatShadedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectFlatShadedMesh", ::CjLib::PrimitiveMeshFactory*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::getStaticF_s_rectFlatShadedMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_rectFlatShadedMesh", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_circleWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_circleWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_circleSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_circleSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_circleFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_circleFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_circleFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_cylinderWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_cylinderWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_cylinderSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_cylinderSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_cylinderFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_cylinderFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_cylinderSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_cylinderSmoothShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_cylinderSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_sphereWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_sphereWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_sphereSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_sphereSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_sphereFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_sphereFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_sphereSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_sphereSmoothShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_sphereSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsuleWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsuleWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsuleSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsuleSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsuleFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsuleFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsuleSmoothShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsuleSmoothShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsuleSmoothShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsule2dWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsule2dWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsule2dSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsule2dSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_capsule2dFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_capsule2dFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_capsule2dFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_coneWireframeMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_coneWireframeMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneWireframeMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_coneSolidColorMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_coneSolidColorMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneSolidColorMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_coneFlatShadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_coneFlatShadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneFlatShadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline void CjLib::PrimitiveMeshFactory::setStaticF_s_coneSmoothhadedMeshPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneSmoothhadedMeshPool", ::CjLib::PrimitiveMeshFactory*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>* CjLib::PrimitiveMeshFactory::getStaticF_s_coneSmoothhadedMeshPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Mesh>>*, "s_coneSmoothhadedMeshPool", ::CjLib::PrimitiveMeshFactory*>();
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::GetPooledLineMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"GetPooledLineMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::Line(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, v0, v1);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::Lines(::ArrayW<::UnityEngine::Vector3>  aVert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Lines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, aVert);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::LineStrip(::ArrayW<::UnityEngine::Vector3>  aVert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"LineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, aVert);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::BoxWireframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxWireframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::BoxSolidColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxSolidColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::BoxFlatShaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"BoxFlatShaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::RectWireframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectWireframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::RectSolidColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectSolidColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::RectFlatShaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"RectFlatShaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CircleWireframe(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CircleSolidColor(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CircleFlatShaded(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CircleFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CylinderWireframe(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CylinderSolidColor(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CylinderFlatShaded(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CylinderSmoothShaded(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CylinderSmoothShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::SphereWireframe(int32_t  latSegments, int32_t  longSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereWireframe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegments, longSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::SphereSolidColor(int32_t  latSegments, int32_t  longSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereSolidColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegments, longSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::SphereFlatShaded(int32_t  latSegments, int32_t  longSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereFlatShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegments, longSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::SphereSmoothShaded(int32_t  latSegments, int32_t  longSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"SphereSmoothShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegments, longSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CapsuleWireframe(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleWireframe", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CapsuleSolidColor(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleSolidColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CapsuleFlatShaded(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleFlatShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::CapsuleSmoothShaded(int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, bool  caps, bool  topCapOnly, bool  sides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"CapsuleSmoothShaded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::Capsule2DWireframe(int32_t  capSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, capSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::Capsule2DSolidColor(int32_t  capSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, capSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::Capsule2DFlatShaded(int32_t  capSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"Capsule2DFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, capSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::ConeWireframe(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeWireframe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::ConeSolidColor(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeSolidColor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::ConeFlatShaded(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeFlatShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline ::UnityW<::UnityEngine::Mesh> CjLib::PrimitiveMeshFactory::ConeSmoothShaded(int32_t  numSegments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {"ConeSmoothShaded", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, numSegments);
}
inline void CjLib::PrimitiveMeshFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::PrimitiveMeshFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::PrimitiveMeshFactory* CjLib::PrimitiveMeshFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::PrimitiveMeshFactory*>());
}
// Ctor Parameters []
constexpr ::CjLib::PrimitiveMeshFactory::PrimitiveMeshFactory()   {
}
