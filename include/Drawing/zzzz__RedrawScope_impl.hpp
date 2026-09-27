#pragma once
// IWYU pragma private; include "Drawing/RedrawScope.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Drawing::RedrawScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)(::Drawing::DrawingData*, int32_t)>(&::Drawing::RedrawScope::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55cb384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::RedrawScope._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)(::Drawing::DrawingData*)>(&::Drawing::RedrawScope::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x55cb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::RedrawScope.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)()>(&::Drawing::RedrawScope::Draw)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55cb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Draw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::RedrawScope.Rewind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)()>(&::Drawing::RedrawScope::Rewind)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55cb4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Rewind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::RedrawScope.DrawUntilDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)()>(&::Drawing::RedrawScope::DrawUntilDispose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55cb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"DrawUntilDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::RedrawScope.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::RedrawScope::*)()>(&::Drawing::RedrawScope::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55cb568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::RedrawScope::setStaticF_idCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "idCounter", ::Drawing::RedrawScope>(std::forward<int32_t>(value));
}
inline int32_t Drawing::RedrawScope::getStaticF_idCounter()  {
return ::cordl_internals::getStaticField<int32_t, "idCounter", ::Drawing::RedrawScope>();
}
inline void Drawing::RedrawScope::_ctor(::Drawing::DrawingData*  gizmos, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, id);
}
inline void Drawing::RedrawScope::_ctor(::Drawing::DrawingData*  gizmos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos);
}
inline void Drawing::RedrawScope::Draw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Draw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::RedrawScope::Rewind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Rewind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::RedrawScope::DrawUntilDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"DrawUntilDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::RedrawScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::RedrawScope>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Drawing::RedrawScope::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Drawing::RedrawScope::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "gizmos", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::RedrawScope::RedrawScope(::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  id) noexcept  {
this->gizmos = gizmos;
this->id = id;
}
// Ctor Parameters []
constexpr ::Drawing::RedrawScope::RedrawScope()   {
}
