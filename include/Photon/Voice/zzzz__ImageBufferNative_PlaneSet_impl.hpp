#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNative_PlaneSet.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNative_PlaneSet_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageBufferNative_PlaneSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferNative_PlaneSet::*)(int32_t, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::GlobalNamespace::ImageBufferNative_PlaneSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7538a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferNative_PlaneSet.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::ImageBufferNative_PlaneSet::*)(int32_t)>(&::GlobalNamespace::ImageBufferNative_PlaneSet::get_Item)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa753964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferNative_PlaneSet.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferNative_PlaneSet::*)(int32_t, ::System::IntPtr)>(&::GlobalNamespace::ImageBufferNative_PlaneSet::set_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7539ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferNative_PlaneSet.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ImageBufferNative_PlaneSet::*)()>(&::GlobalNamespace::ImageBufferNative_PlaneSet::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7539ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImageBufferNative_PlaneSet.set_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageBufferNative_PlaneSet::*)(int32_t)>(&::GlobalNamespace::ImageBufferNative_PlaneSet::set_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7539f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ImageBufferNative_PlaneSet::_ctor(int32_t  length, ::System::IntPtr  p0, ::System::IntPtr  p1, ::System::IntPtr  p2, ::System::IntPtr  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, p0, p1, p2, p3);
}
inline ::System::IntPtr GlobalNamespace::ImageBufferNative_PlaneSet::get_Item(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method, key);
}
inline void GlobalNamespace::ImageBufferNative_PlaneSet::set_Item(int32_t  key, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
inline int32_t GlobalNamespace::ImageBufferNative_PlaneSet::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ImageBufferNative_PlaneSet::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ImageBufferNative_PlaneSet>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "plane0", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "plane1", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "plane2", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "plane3", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet::ImageBufferNative_PlaneSet(::System::IntPtr  plane0, ::System::IntPtr  plane1, ::System::IntPtr  plane2, ::System::IntPtr  plane3, int32_t  _Length_k__BackingField) noexcept  {
this->plane0 = plane0;
this->plane1 = plane1;
this->plane2 = plane2;
this->plane3 = plane3;
this->_Length_k__BackingField = _Length_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageBufferNative_PlaneSet::ImageBufferNative_PlaneSet()   {
}
