#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectBaker_TransformPath.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath__Indices_impl.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_TransformPath__Indices_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_TransformPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkObjectBaker_TransformPath::*)(uint16_t, uint16_t, ::System::Collections::Generic::List_1<uint16_t>*, int32_t, int32_t)>(&::GlobalNamespace::NetworkObjectBaker_TransformPath::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60e53ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkObjectBaker_TransformPath.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkObjectBaker_TransformPath::*)()>(&::GlobalNamespace::NetworkObjectBaker_TransformPath::ToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60e4ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetworkObjectBaker_TransformPath::_ctor(uint16_t  depth, uint16_t  next, ::System::Collections::Generic::List_1<uint16_t>*  indices, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, depth, next, indices, offset, count);
}
inline ::StringW GlobalNamespace::NetworkObjectBaker_TransformPath::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkObjectBaker_TransformPath>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Indices", ty: "::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Depth", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObjectBaker_TransformPath::NetworkObjectBaker_TransformPath(::GlobalNamespace::TransformPath_NetworkObjectBaker__Indices  Indices, uint16_t  Depth, uint16_t  Next) noexcept  {
this->Indices = Indices;
this->Depth = Depth;
this->Next = Next;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObjectBaker_TransformPath::NetworkObjectBaker_TransformPath()   {
}
