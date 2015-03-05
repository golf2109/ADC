typedef struct {
	uint32_t 	year;	       /* 1..4095 */
	uint32_t  month;	       /* 1..12 */
	uint32_t  mday;	       /* 1.. 31 */
	uint32_t  wday;	       /* 0..6, Sunday = 0*/
	uint32_t  hour;	       /* 0..23 */
	uint32_t  min;	       /* 0..59 */
	uint32_t  sec;	       /* 0..59 */
	uint32_t  dst;	       /* 0 Winter, !=0 Summer */
} RTC_t;


	
void	RtcCorr(void);

void SetCounterRTC(uint32_t cnt);
//*****************************************************************
//function инициализация часов                                   //
//argument none                                                  //
//result   sysOK,sysERROR - если часы были выключены             //
//*****************************************************************
int  RtcInit  (void);
//*****************************************************************
//function чтение времени из часов в структуру                   //
//argument указатель на структуру                                //
//result   none                                                  //
//*****************************************************************
void rtc_gettime (RTC_t *rtc);		
//*****************************************************************
//function запись времени и структуры в часы                     //
//argument указатель на структуру                                //
//result   none                                                  //
//*****************************************************************
void rtc_settime (const RTC_t *rtc);
