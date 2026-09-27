#pragma once
// IWYU pragma private; include "Modio/ModioCommandLine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioCommandLine_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::Modio::ModioCommandLine.TryGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::Modio::ModioCommandLine::TryGet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa01a3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioCommandLine*>(),
                        {"TryGet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioCommandLine.GetArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModioCommandLine::GetArguments)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa01a48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioCommandLine*>(),
                        {"GetArguments", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModioCommandLine::setStaticF__argumentCache(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*, "_argumentCache", ::Modio::ModioCommandLine*>(std::forward<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>* Modio::ModioCommandLine::getStaticF__argumentCache()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW,::StringW>*, "_argumentCache", ::Modio::ModioCommandLine*>();
}
inline bool Modio::ModioCommandLine::TryGet(::StringW  argument, ::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioCommandLine*>(),
                        {"TryGet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, argument, value);
}
inline void Modio::ModioCommandLine::GetArguments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioCommandLine*>(),
                        {"GetArguments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::ModioCommandLine::ModioCommandLine()   {
}
