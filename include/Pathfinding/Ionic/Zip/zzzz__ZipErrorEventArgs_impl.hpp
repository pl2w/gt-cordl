#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipErrorEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventArgs_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorEventArgs_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntry_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipErrorEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipErrorEventArgs::*)()>(&::Pathfinding::Ionic::Zip::ZipErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa68c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipErrorEventArgs.Saving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipErrorEventArgs* (*)(::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*, ::System::Exception*)>(&::Pathfinding::Ionic::Zip::ZipErrorEventArgs::Saving)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa68c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>(),
                        {"Saving", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Pathfinding::Ionic::Zip::ZipErrorEventArgs::__cordl_internal_get__exc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exc;
}
constexpr ::System::Exception* const& Pathfinding::Ionic::Zip::ZipErrorEventArgs::__cordl_internal_get__exc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exc;
}
constexpr void Pathfinding::Ionic::Zip::ZipErrorEventArgs::__cordl_internal_set__exc(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exc = value;
}
inline void Pathfinding::Ionic::Zip::ZipErrorEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipErrorEventArgs* Pathfinding::Ionic::Zip::ZipErrorEventArgs::Saving(::StringW  archiveName, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>(),
                        {"Saving", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Ionic::Zip::ZipEntry*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>(nullptr, ___internal_method, archiveName, entry, exception);
}
inline ::Pathfinding::Ionic::Zip::ZipErrorEventArgs* Pathfinding::Ionic::Zip::ZipErrorEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipErrorEventArgs::ZipErrorEventArgs()   {
}
