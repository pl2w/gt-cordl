#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/SystemHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__SystemHelper_def.hpp"
#include "Backtrace/Unity/Common/zzzz__SystemHelper_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.GetCurrentThreadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Backtrace::Unity::Common::SystemHelper::GetCurrentThreadId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f26a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"GetCurrentThreadId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.LoadLibrary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::StringW)>(&::Backtrace::Unity::Common::SystemHelper::LoadLibrary)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f27010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"LoadLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.IsLibraryAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Backtrace::Unity::Common::SystemHelper::IsLibraryAvailable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f270a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"IsLibraryAvailable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.IsLibraryAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>)>(&::Backtrace::Unity::Common::SystemHelper::IsLibraryAvailable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5f26ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"IsLibraryAvailable", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Backtrace::Unity::Common::SystemHelper::Name)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5f21ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper.CpuArchitecture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Backtrace::Unity::Common::SystemHelper::CpuArchitecture)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f21e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"CpuArchitecture", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Backtrace::Unity::Common::SystemHelper::GetCurrentThreadId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"GetCurrentThreadId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::System::IntPtr Backtrace::Unity::Common::SystemHelper::LoadLibrary(::StringW  lpFileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"LoadLibrary", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, lpFileName);
}
inline bool Backtrace::Unity::Common::SystemHelper::IsLibraryAvailable(::StringW  libraryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"IsLibraryAvailable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, libraryName);
}
inline bool Backtrace::Unity::Common::SystemHelper::IsLibraryAvailable(::ArrayW<::StringW>  libraries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"IsLibraryAvailable", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, libraries);
}
inline ::StringW Backtrace::Unity::Common::SystemHelper::Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW Backtrace::Unity::Common::SystemHelper::CpuArchitecture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper*>(),
                        {"CpuArchitecture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::SystemHelper::SystemHelper()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Common::SystemHelper___c::*)()>(&::Backtrace::Unity::Common::SystemHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f271b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::SystemHelper___c._IsLibraryAvailable_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Common::SystemHelper___c::*)(::StringW)>(&::Backtrace::Unity::Common::SystemHelper___c::_IsLibraryAvailable_b__3_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f271c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper___c*>(),
                        {"<IsLibraryAvailable>b__3_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Common::SystemHelper___c::setStaticF___9(::Backtrace::Unity::Common::SystemHelper___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Common::SystemHelper___c*, "<>9", ::Backtrace::Unity::Common::SystemHelper___c*>(std::forward<::Backtrace::Unity::Common::SystemHelper___c*>(value));
}
inline ::Backtrace::Unity::Common::SystemHelper___c* Backtrace::Unity::Common::SystemHelper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Common::SystemHelper___c*, "<>9", ::Backtrace::Unity::Common::SystemHelper___c*>();
}
inline void Backtrace::Unity::Common::SystemHelper___c::setStaticF___9__3_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__3_0", ::Backtrace::Unity::Common::SystemHelper___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Backtrace::Unity::Common::SystemHelper___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__3_0", ::Backtrace::Unity::Common::SystemHelper___c*>();
}
inline void Backtrace::Unity::Common::SystemHelper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Common::SystemHelper___c::_IsLibraryAvailable_b__3_0(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::SystemHelper___c*>(),
                        {"<IsLibraryAvailable>b__3_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Common::SystemHelper___c* Backtrace::Unity::Common::SystemHelper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Common::SystemHelper___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::SystemHelper___c::SystemHelper___c()   {
}
