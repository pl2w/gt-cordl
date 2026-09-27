#pragma once
// IWYU pragma private; include "Fusion/Simulation_AreaOfInterest.hpp"
#include "Fusion/zzzz__Simulation_AreaOfInterest_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.GetGridSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (*)()>(&::GlobalNamespace::Simulation_AreaOfInterest::GetGridSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ff2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"GetGridSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.GetCellSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::Simulation_AreaOfInterest::GetCellSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ff2cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"GetCellSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.SphereToCells
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::GlobalNamespace::Simulation_AreaOfInterest::SphereToCells)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ff2d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"SphereToCells", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ToCellCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Simulation_AreaOfInterest::ToCellCoords)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ff2ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCoords", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ToCellCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (*)(int32_t)>(&::GlobalNamespace::Simulation_AreaOfInterest::ToCellCoords)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ff315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCoords", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ToCellCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t)>(&::GlobalNamespace::Simulation_AreaOfInterest::ToCellCenter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ff3208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCenter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ToCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Simulation_AreaOfInterest::ToCell)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ff32dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCell", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ToCell
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::Simulation_AreaOfInterest::ToCell)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ff2fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest.ClampCellCoords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<int32_t,int32_t,int32_t> (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::Simulation_AreaOfInterest::ClampCellCoords)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ff3078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ClampCellCoords", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Simulation_AreaOfInterest._ClampCellCoords_g__Clamp_15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::Simulation_AreaOfInterest::_ClampCellCoords_g__Clamp_15_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ff3360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"<ClampCellCoords>g__Clamp|15_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Simulation_AreaOfInterest::setStaticF_X_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "X_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::getStaticF_X_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "X_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>();
}
inline void GlobalNamespace::Simulation_AreaOfInterest::setStaticF_Y_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Y_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::getStaticF_Y_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "Y_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>();
}
inline void GlobalNamespace::Simulation_AreaOfInterest::setStaticF_Z_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Z_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::getStaticF_Z_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "Z_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>();
}
inline void GlobalNamespace::Simulation_AreaOfInterest::setStaticF_CELL_SIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CELL_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::getStaticF_CELL_SIZE()  {
return ::cordl_internals::getStaticField<int32_t, "CELL_SIZE", ::GlobalNamespace::Simulation_AreaOfInterest>();
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::Simulation_AreaOfInterest::GetGridSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"GetGridSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::GetCellSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"GetCellSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Simulation_AreaOfInterest::SphereToCells(::UnityEngine::Vector3  position, float_t  radius, ::System::Collections::Generic::HashSet_1<int32_t>*  cells)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"SphereToCells", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius, cells);
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::Simulation_AreaOfInterest::ToCellCoords(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCoords", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(nullptr, ___internal_method, position);
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::Simulation_AreaOfInterest::ToCellCoords(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCoords", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(nullptr, ___internal_method, index);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Simulation_AreaOfInterest::ToCellCenter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCellCenter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, index);
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::ToCell(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCell", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, position);
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::ToCell(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ToCell", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y, z);
}
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::Simulation_AreaOfInterest::ClampCellCoords(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"ClampCellCoords", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<int32_t,int32_t,int32_t>>(nullptr, ___internal_method, x, y, z);
}
inline int32_t GlobalNamespace::Simulation_AreaOfInterest::_ClampCellCoords_g__Clamp_15_0(int32_t  v, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Simulation_AreaOfInterest>(),
                        {"<ClampCellCoords>g__Clamp|15_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v, max);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_AreaOfInterest::Simulation_AreaOfInterest()   {
}
