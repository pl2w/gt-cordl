#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_PolygonSolution.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_PolygonSolution_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_PolygonSolution.StateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConfinerOven_PolygonSolution::*)(::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>)>(&::GlobalNamespace::ConfinerOven_PolygonSolution::StateChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaeb6520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_PolygonSolution>(),
                        {"StateChanged", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConfinerOven_PolygonSolution.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConfinerOven_PolygonSolution::*)()>(&::GlobalNamespace::ConfinerOven_PolygonSolution::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeb6614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_PolygonSolution>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::ConfinerOven_PolygonSolution::StateChanged(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_PolygonSolution>(),
                        {"StateChanged", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, paths);
}
inline bool GlobalNamespace::ConfinerOven_PolygonSolution::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConfinerOven_PolygonSolution>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "polygons", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frustumHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfinerOven_PolygonSolution::ConfinerOven_PolygonSolution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  polygons, float_t  frustumHeight) noexcept  {
this->polygons = polygons;
this->frustumHeight = frustumHeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfinerOven_PolygonSolution::ConfinerOven_PolygonSolution()   {
}
