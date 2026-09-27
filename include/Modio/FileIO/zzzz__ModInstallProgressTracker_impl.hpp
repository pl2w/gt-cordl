#pragma once
// IWYU pragma private; include "Modio/FileIO/ModInstallProgressTracker.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::ModInstallProgressTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::ModInstallProgressTracker::*)(::Modio::Mods::Mod*, int64_t, ::System::Func_1<int64_t>*)>(&::Modio::FileIO::ModInstallProgressTracker::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa0548a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Func_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::ModInstallProgressTracker.get_CurrentBytesGetter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<int64_t>* (::Modio::FileIO::ModInstallProgressTracker::*)()>(&::Modio::FileIO::ModInstallProgressTracker::get_CurrentBytesGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0548f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"get_CurrentBytesGetter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::ModInstallProgressTracker.set_CurrentBytesGetter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::ModInstallProgressTracker::*)(::System::Func_1<int64_t>*)>(&::Modio::FileIO::ModInstallProgressTracker::set_CurrentBytesGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa054900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"set_CurrentBytesGetter", {}, {::i2c::type_of<::System::Func_1<int64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::ModInstallProgressTracker.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::ModInstallProgressTracker::*)()>(&::Modio::FileIO::ModInstallProgressTracker::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa054908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::ModInstallProgressTracker.SetBytesRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::ModInstallProgressTracker::*)(int64_t)>(&::Modio::FileIO::ModInstallProgressTracker::SetBytesRead)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa05493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"SetBytesRead", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::Mods::Mod*& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
constexpr int64_t& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__totalSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSize;
}
constexpr int64_t const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__totalSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSize;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__totalSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalSize = value;
}
constexpr ::System::Func_1<int64_t>*& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__currentBytesGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBytesGetter;
}
constexpr ::System::Func_1<int64_t>* const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__currentBytesGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBytesGetter;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__currentBytesGetter(::System::Func_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBytesGetter = value;
}
constexpr ::System::DateTime& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__lastCalculatedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCalculatedAt;
}
constexpr ::System::DateTime const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__lastCalculatedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCalculatedAt;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__lastCalculatedAt(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCalculatedAt = value;
}
constexpr int64_t& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__bytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSecond;
}
constexpr int64_t const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__bytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSecond;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__bytesPerSecond(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesPerSecond = value;
}
constexpr int64_t& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__lastCalculatedSpeedAtBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCalculatedSpeedAtBytes;
}
constexpr int64_t const& Modio::FileIO::ModInstallProgressTracker::__cordl_internal_get__lastCalculatedSpeedAtBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCalculatedSpeedAtBytes;
}
constexpr void Modio::FileIO::ModInstallProgressTracker::__cordl_internal_set__lastCalculatedSpeedAtBytes(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCalculatedSpeedAtBytes = value;
}
inline void Modio::FileIO::ModInstallProgressTracker::_ctor(::Modio::Mods::Mod*  mod, int64_t  totalSize, ::System::Func_1<int64_t>*  currentBytesGetter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Func_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, totalSize, currentBytesGetter);
}
inline ::System::Func_1<int64_t>* Modio::FileIO::ModInstallProgressTracker::get_CurrentBytesGetter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"get_CurrentBytesGetter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<int64_t>*>(this, ___internal_method);
}
inline void Modio::FileIO::ModInstallProgressTracker::set_CurrentBytesGetter(::System::Func_1<int64_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"set_CurrentBytesGetter", {}, {::i2c::type_of<::System::Func_1<int64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::FileIO::ModInstallProgressTracker::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::FileIO::ModInstallProgressTracker::SetBytesRead(int64_t  currentBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::ModInstallProgressTracker*>(),
                        {"SetBytesRead", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentBytes);
}
inline ::Modio::FileIO::ModInstallProgressTracker* Modio::FileIO::ModInstallProgressTracker::New_ctor(::Modio::Mods::Mod*  mod, int64_t  totalSize, ::System::Func_1<int64_t>*  currentBytesGetter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::ModInstallProgressTracker*>(mod, totalSize, currentBytesGetter));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::ModInstallProgressTracker::ModInstallProgressTracker()   {
}
