#pragma once
// IWYU pragma private; include "GorillaTag/Scripts/Utilities/GTStr.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Scripts/Utilities/zzzz__GTStr_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GorillaTag::Scripts::Utilities::GTStr.Bullet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::StringW>*, ::StringW)>(&::GorillaTag::Scripts::Utilities::GTStr::Bullet)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5d3d2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::GTStr*>(),
                        {"Bullet", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Scripts::Utilities::GTStr.Bullet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IList_1<::StringW>*, ::StringW)>(&::GorillaTag::Scripts::Utilities::GTStr::Bullet)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5d3d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::GTStr*>(),
                        {"Bullet", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Scripts::Utilities::GTStr::Bullet(::System::Text::StringBuilder*  builder, ::System::Collections::Generic::IList_1<::StringW>*  strings, ::StringW  bulletStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::GTStr*>(),
                        {"Bullet", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, strings, bulletStr);
}
inline ::StringW GorillaTag::Scripts::Utilities::GTStr::Bullet(::System::Collections::Generic::IList_1<::StringW>*  strings, ::StringW  bulletStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Scripts::Utilities::GTStr*>(),
                        {"Bullet", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, strings, bulletStr);
}
// Ctor Parameters []
constexpr ::GorillaTag::Scripts::Utilities::GTStr::GTStr()   {
}
