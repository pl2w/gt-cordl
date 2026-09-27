#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/StringTable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable.GenerateCharacterSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::StringTable::*)()>(&::UnityEngine::Localization::Tables::StringTable::GenerateCharacterSet)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb01a4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {"GenerateCharacterSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable.CollectLiteralCharacters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<char16_t>* (::UnityEngine::Localization::Tables::StringTable::*)()>(&::UnityEngine::Localization::Tables::StringTable::CollectLiteralCharacters)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xb01a634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {"CollectLiteralCharacters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable.CreateTableEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::StringTableEntry* (::UnityEngine::Localization::Tables::StringTable::*)()>(&::UnityEngine::Localization::Tables::StringTable::CreateTableEntry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb01a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::StringTable::*)()>(&::UnityEngine::Localization::Tables::StringTable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb01aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Localization::Tables::StringTable::GenerateCharacterSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {"GenerateCharacterSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* UnityEngine::Localization::Tables::StringTable::CollectLiteralCharacters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {"CollectLiteralCharacters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<char16_t>*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::StringTableEntry* UnityEngine::Localization::Tables::StringTable::CreateTableEntry()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::StringTableEntry*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::StringTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::StringTable* UnityEngine::Localization::Tables::StringTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::StringTable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::StringTable::StringTable()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::StringTable___c::*)()>(&::UnityEngine::Localization::Tables::StringTable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::StringTable___c._GenerateCharacterSet_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::UnityEngine::Localization::Tables::StringTable___c::*)(char16_t)>(&::UnityEngine::Localization::Tables::StringTable___c::_GenerateCharacterSet_b__0_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01ab58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable___c*>(),
                        {"<GenerateCharacterSet>b__0_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Tables::StringTable___c::setStaticF___9(::UnityEngine::Localization::Tables::StringTable___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::Tables::StringTable___c*, "<>9", ::UnityEngine::Localization::Tables::StringTable___c*>(std::forward<::UnityEngine::Localization::Tables::StringTable___c*>(value));
}
inline ::UnityEngine::Localization::Tables::StringTable___c* UnityEngine::Localization::Tables::StringTable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::Tables::StringTable___c*, "<>9", ::UnityEngine::Localization::Tables::StringTable___c*>();
}
inline void UnityEngine::Localization::Tables::StringTable___c::setStaticF___9__0_0(::System::Func_2<char16_t,char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<char16_t,char16_t>*, "<>9__0_0", ::UnityEngine::Localization::Tables::StringTable___c*>(std::forward<::System::Func_2<char16_t,char16_t>*>(value));
}
inline ::System::Func_2<char16_t,char16_t>* UnityEngine::Localization::Tables::StringTable___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<char16_t,char16_t>*, "<>9__0_0", ::UnityEngine::Localization::Tables::StringTable___c*>();
}
inline void UnityEngine::Localization::Tables::StringTable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t UnityEngine::Localization::Tables::StringTable___c::_GenerateCharacterSet_b__0_0(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::StringTable___c*>(),
                        {"<GenerateCharacterSet>b__0_0", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, c);
}
inline ::UnityEngine::Localization::Tables::StringTable___c* UnityEngine::Localization::Tables::StringTable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::StringTable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::StringTable___c::StringTable___c()   {
}
