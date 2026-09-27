#pragma once
// IWYU pragma private; include "Fusion/TickRate.hpp"
#include "Fusion/zzzz__TickRate___rates_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__TickRate_def.hpp"
#include "Fusion/zzzz__TickRate_Resolved_def.hpp"
#include "Fusion/zzzz__TickRate_Selection_def.hpp"
#include "Fusion/zzzz__TickRate_ValidateResult_def.hpp"
#include "Fusion/zzzz__TickRate___rates_e__FixedBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::Fusion::TickRate.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickRate::*)()>(&::Fusion::TickRate::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickRate::*)()>(&::Fusion::TickRate::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa4de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickRate::*)(int32_t)>(&::Fusion::TickRate::get_Item)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fa4de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TickRate::*)(::ArrayW<int32_t>)>(&::Fusion::TickRate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.GetDivisor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickRate::*)(int32_t)>(&::Fusion::TickRate::GetDivisor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5fa4f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"GetDivisor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.GetTickRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::TickRate::*)(int32_t)>(&::Fusion::TickRate::GetTickRate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fa4e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"GetTickRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Fusion::TickRate::*)()>(&::Fusion::TickRate::ToArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fa4ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::TickRate::*)()>(&::Fusion::TickRate::Validate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fa50d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.ClampSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TickRate_Selection (::Fusion::TickRate::*)(::GlobalNamespace::TickRate_Selection)>(&::Fusion::TickRate::ClampSelection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fa51d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ClampSelection", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.ValidateSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TickRate_ValidateResult (::Fusion::TickRate::*)(::GlobalNamespace::TickRate_Selection)>(&::Fusion::TickRate::ValidateSelection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fa52d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ValidateSelection", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TickRate_Selection (*)()>(&::Fusion::TickRate::get_Default)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa53b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.get_Shared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TickRate_Selection (*)()>(&::Fusion::TickRate::get_Shared)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa53c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Shared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.InitChecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::TickRate::InitChecked)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5fa5c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"InitChecked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::TickRate::Init)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x5fa53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::TickRate)>(&::Fusion::TickRate::IsValid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fa5d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"IsValid", {}, {::i2c::type_of<::Fusion::TickRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Fusion::TickRate::IsValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fa5d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::TickRate (*)(int32_t)>(&::Fusion::TickRate::Get)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fa5dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.Resolve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TickRate_Resolved (*)(::GlobalNamespace::TickRate_Selection)>(&::Fusion::TickRate::Resolve)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5fa5f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Resolve", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TickRate.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Fusion::TickRate>* (*)()>(&::Fusion::TickRate::get_Available)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fa60f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Available", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::TickRate::__cordl_internal_get__count()  {
return this->____count;
}
constexpr int32_t const& Fusion::TickRate::__cordl_internal_get__count() const {
return this->____count;
}
constexpr void Fusion::TickRate::__cordl_internal_set__count(int32_t  value)  {
this->____count = value;
}
constexpr ::GlobalNamespace::TickRate___rates_e__FixedBuffer& Fusion::TickRate::__cordl_internal_get__rates()  {
return this->____rates;
}
constexpr ::GlobalNamespace::TickRate___rates_e__FixedBuffer const& Fusion::TickRate::__cordl_internal_get__rates() const {
return this->____rates;
}
constexpr void Fusion::TickRate::__cordl_internal_set__rates(::GlobalNamespace::TickRate___rates_e__FixedBuffer  value)  {
this->____rates = value;
}
inline void Fusion::TickRate::setStaticF__valid(::ArrayW<::Fusion::TickRate>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Fusion::TickRate>, "_valid", ::Fusion::TickRate>(std::forward<::ArrayW<::Fusion::TickRate>>(value));
}
inline ::ArrayW<::Fusion::TickRate> Fusion::TickRate::getStaticF__valid()  {
return ::cordl_internals::getStaticField<::ArrayW<::Fusion::TickRate>, "_valid", ::Fusion::TickRate>();
}
inline void Fusion::TickRate::setStaticF__validReadOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*, "_validReadOnly", ::Fusion::TickRate>(std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>* Fusion::TickRate::getStaticF__validReadOnly()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*, "_validReadOnly", ::Fusion::TickRate>();
}
inline void Fusion::TickRate::setStaticF__lookup(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*, "_lookup", ::Fusion::TickRate>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>* Fusion::TickRate::getStaticF__lookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*, "_lookup", ::Fusion::TickRate>();
}
inline int32_t Fusion::TickRate::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::TickRate::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::TickRate::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void Fusion::TickRate::_ctor(/* [ParamArray] */ ::ArrayW<int32_t>  rates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rates);
}
inline int32_t Fusion::TickRate::GetDivisor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"GetDivisor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline int32_t Fusion::TickRate::GetTickRate(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"GetTickRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline ::ArrayW<int32_t> Fusion::TickRate::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(*this, ___internal_method);
}
inline bool Fusion::TickRate::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::TickRate_Selection Fusion::TickRate::ClampSelection(::GlobalNamespace::TickRate_Selection  selection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ClampSelection", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TickRate_Selection>(*this, ___internal_method, selection);
}
inline ::GlobalNamespace::TickRate_ValidateResult Fusion::TickRate::ValidateSelection(::GlobalNamespace::TickRate_Selection  selected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"ValidateSelection", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TickRate_ValidateResult>(*this, ___internal_method, selected);
}
inline ::GlobalNamespace::TickRate_Selection Fusion::TickRate::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TickRate_Selection>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::TickRate_Selection Fusion::TickRate::get_Shared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Shared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TickRate_Selection>(nullptr, ___internal_method);
}
inline void Fusion::TickRate::InitChecked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"InitChecked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Fusion::TickRate::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Fusion::TickRate::IsValid(::Fusion::TickRate  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"IsValid", {}, {::i2c::type_of<::Fusion::TickRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rate);
}
inline bool Fusion::TickRate::IsValid(int32_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rate);
}
inline ::Fusion::TickRate Fusion::TickRate::Get(int32_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::TickRate>(nullptr, ___internal_method, rate);
}
inline ::GlobalNamespace::TickRate_Resolved Fusion::TickRate::Resolve(::GlobalNamespace::TickRate_Selection  selection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"Resolve", {}, {::i2c::type_of<::GlobalNamespace::TickRate_Selection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TickRate_Resolved>(nullptr, ___internal_method, selection);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Fusion::TickRate>* Fusion::TickRate::get_Available()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TickRate>(),
                        {"get_Available", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Fusion::TickRate>*>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rates", ty: "::GlobalNamespace::TickRate___rates_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TickRate::TickRate(int32_t  _count, ::GlobalNamespace::TickRate___rates_e__FixedBuffer  _rates) noexcept  {
this->_count = _count;
this->_rates = _rates;
}
// Ctor Parameters []
constexpr ::Fusion::TickRate::TickRate()   {
}
