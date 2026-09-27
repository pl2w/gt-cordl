#pragma once
// IWYU pragma private; include "System/Data/DataError.hpp"
#include "System/Data/zzzz__DataError_ColumnError_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataError_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataError_ColumnError_def.hpp"
//  Writing Method size for method: ::System::Data::DataError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)()>(&::System::Data::DataError::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa920fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)(::StringW)>(&::System::Data::DataError::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa921018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataError::*)()>(&::System::Data::DataError::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9210a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"get_Text", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.set_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)(::StringW)>(&::System::Data::DataError::set_Text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa9210b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.get_HasErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataError::*)()>(&::System::Data::DataError::get_HasErrors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa9210d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"get_HasErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.SetColumnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)(::System::Data::DataColumn*, ::StringW)>(&::System::Data::DataError::SetColumnError)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa921100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"SetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.GetColumnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataError::*)(::System::Data::DataColumn*)>(&::System::Data::DataError::GetColumnError)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa921428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"GetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)(::System::Data::DataColumn*)>(&::System::Data::DataError::Clear)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa921230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"Clear", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)()>(&::System::Data::DataError::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa92148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.GetColumnsInError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataError::*)()>(&::System::Data::DataError::GetColumnsInError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa921500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"GetColumnsInError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.SetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataError::*)(::StringW)>(&::System::Data::DataError::SetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa921088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataError.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataError::*)(::System::Data::DataColumn*)>(&::System::Data::DataError::IndexOf)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa9212dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::DataError::__cordl_internal_get__rowError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowError;
}
constexpr ::StringW const& System::Data::DataError::__cordl_internal_get__rowError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowError;
}
constexpr void System::Data::DataError::__cordl_internal_set__rowError(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rowError = value;
}
constexpr int32_t& System::Data::DataError::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& System::Data::DataError::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void System::Data::DataError::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr ::ArrayW<::GlobalNamespace::DataError_ColumnError>& System::Data::DataError::__cordl_internal_get__errorList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorList;
}
constexpr ::ArrayW<::GlobalNamespace::DataError_ColumnError> const& System::Data::DataError::__cordl_internal_get__errorList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorList;
}
constexpr void System::Data::DataError::__cordl_internal_set__errorList(::ArrayW<::GlobalNamespace::DataError_ColumnError>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorList = value;
}
inline void System::Data::DataError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataError::_ctor(::StringW  rowError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rowError);
}
inline ::StringW System::Data::DataError::get_Text()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"get_Text", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataError::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"set_Text", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataError::get_HasErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"get_HasErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataError::SetColumnError(::System::Data::DataColumn*  column, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"SetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, error);
}
inline ::StringW System::Data::DataError::GetColumnError(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"GetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, column);
}
inline void System::Data::DataError::Clear(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"Clear", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataError::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataError::GetColumnsInError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"GetColumnsInError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline void System::Data::DataError::SetText(::StringW  errorText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"SetText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorText);
}
inline int32_t System::Data::DataError::IndexOf(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataError*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, column);
}
inline ::System::Data::DataError* System::Data::DataError::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataError*>());
}
inline ::System::Data::DataError* System::Data::DataError::New_ctor(::StringW  rowError)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataError*>(rowError));
}
// Ctor Parameters []
constexpr ::System::Data::DataError::DataError()   {
}
